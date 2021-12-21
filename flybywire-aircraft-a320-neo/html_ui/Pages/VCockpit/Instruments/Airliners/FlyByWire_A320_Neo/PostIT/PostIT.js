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

        if (this.textElem) {
            this.initMainLoop();
        }

        this.textElem.addEventListener("keydown", (e) => {
            console.log(e.target.value);
            NXDataStore.set("POSTIT_CONTENT", e.target.value);
        });

        this.textElem.addEventListener("input", () => {
            // The character below being replaced is U+007f (DELETE Character)
            this.textElem.value = this.textElem.value.replace(/\u007f/g, '');
        });

        this.textElem.addEventListener("click", () => {
            this.textFocused ? Coherent.trigger("UNFOCUS_INPUT_FIELD") : Coherent.trigger("FOCUS_INPUT_FIELD");
            this.textFocused = !this.textFocused;

            if (this.textFocused) {
                setTimeout(() => {
                    Coherent.trigger("UNFOCUS_INPUT_FIELD");
                    this.textFocused = false;
                }, 30000);
            }

            this.textFocused ? this.textElem.focus() : this.textElem.blur();
            document.getElementById('outline').style.display = this.textFocused ? "block" : "none";
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

    Update() {
        this.textElem.innerText = NXDataStore.get("POSTIT_CONTENT") || "Put your favorite text here : )";
    }
}

registerInstrument("livery-postit-element", PostIT);
