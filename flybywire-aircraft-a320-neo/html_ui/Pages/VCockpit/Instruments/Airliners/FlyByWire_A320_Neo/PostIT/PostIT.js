class PostIT extends BaseInstrument {
    constructor() {
        super();
        this.curTime = 0.0;
        this.needUpdate = false;
        this._isConnected = false;
        this.textFocused = false;
    }

    get templateID() {
        return "postit";
    }

    connectedCallback() {
        super.connectedCallback();

        this.textElem = document.getElementById("text");
        this.invisElem = document.getElementById("invis");
        this.taskbar = document.getElementById("taskbar");
        this.typographyIcon = document.getElementById("typography");
        this.paletteIcon = document.getElementById("palette");
        this.pencilIcon = document.getElementById("pencil");

        this.fonts = ['Caveat', 'Marker', 'Gochi', 'RockSalt', 'Kalam'];
        // IMPORTANT NOTE: The formatting of these strings is very important. (They MUST be defined as 'rgb(xxx, xxx, xxx)')
        this.penColors = ['rgb(0, 0, 0)', 'rgb(255, 0, 0)', 'rgb(22, 38, 76)', 'rgb(124, 51, 161)', 'rgb(212, 212, 212)'];
        this.pageColors = ['rgb(255, 255, 151)', 'rgb(251, 174, 74)', 'rgb(234, 236, 64)', 'rgb(242, 117, 173)', 'rgb(121, 203, 197)', 'rgb(177, 177, 177)'];

        this.textElem.innerText = NXDataStore.get("POSTIT_CONTENT", "Put your favorite text here : )");

        if (this.textElem) {
            this.initMainLoop();
        }

        if (NXDataStore.get("POSTIT_FONT")) {
            this.textElem.style.fontFamily = NXDataStore.get("POSTIT_FONT");
        }

        if (NXDataStore.get("POSTIT_PAGE_COLOR")) {
            this.textElem.style.backgroundColor = NXDataStore.get("POSTIT_PAGE_COLOR");
            this.paletteIcon.style.stroke = NXDataStore.get("POSTIT_PAGE_COLOR");
        }

        if (NXDataStore.get("POSTIT_PEN_COLOR")) {
            this.textElem.style.color = NXDataStore.get("POSTIT_PEN_COLOR");
            this.pencilIcon.style.stroke = NXDataStore.get("POSTIT_PEN_COLOR");
        }

        const setProperties = (options, textElemProperty, iconElem, dataStoreKey) => {
            this.textElem.focus();
            const option = options[(options.indexOf(this.textElem.style[textElemProperty]) + 1) % options.length];
            this.textElem.style[textElemProperty] = option;

            if (iconElem) {
                iconElem.style.stroke = option;
            }

            NXDataStore.set(dataStoreKey, option);
        };

        this.paletteIcon.addEventListener("click", () => {
            setProperties(this.pageColors, "backgroundColor", this.paletteIcon, "POSTIT_PAGE_COLOR");
        });

        this.pencilIcon.addEventListener("click", () => {
            setProperties(this.penColors, "color", this.pencilIcon, "POSTIT_PEN_COLOR");
        });

        this.typographyIcon.addEventListener("click", () => {
            setProperties(this.fonts, "fontFamily", null, "POSTIT_FONT");
            this.invisElem.style.fontFamily = this.textElem.style.fontFamily;
        });

        this.textElem.addEventListener("input", () => {
            // The character being replaced is U+007f (DELETE Character)
            this.textElem.value = this.textElem.value.replace(/\u007f/g, '');
        });

        this.textElem.addEventListener("keypress", (e) => {
            // The character below is a one em-unit sized space
            this.invisElem.innerText = e.target.value + "\u2003";

            if (this.invisElem.clientHeight > 1000) {
                e.preventDefault();
            }
        });

        this.textElem.addEventListener("click", () => {
            this.textFocused = !this.textFocused;

            this.taskbar.style.display = this.textFocused ? "flex" : "none";

            if (this.textFocused) {
                Coherent.trigger("FOCUS_INPUT_FIELD");
                this.textElem.focus();
            } else {
                Coherent.trigger("UNFOCUS_INPUT_FIELD");
                this.textElem.blur();

                setTimeout(() => {
                    Coherent.trigger("UNFOCUS_INPUT_FIELD");
                    this.textFocused = false;
                }, 30000);

                NXDataStore.set("POSTIT_CONTENT", this.textElem.value);
            }
        });
    }

    get isInteractive() {
        return true;
    }

    initMainLoop() {
        const updateLoop = () => {
            if (!this._isConnected) {
                return;
            }
            this.Update();
            requestAnimationFrame(updateLoop);
        };
        this._isConnected = true;
        requestAnimationFrame(updateLoop);
    }

    disconnectedCallback() {}
}

registerInstrument("postit-element", PostIT);
