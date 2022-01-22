#ifndef RTW_HEADER_FlyByWire_h_
#define RTW_HEADER_FlyByWire_h_
#include <cmath>
#include "rtwtypes.h"
#include "FlyByWire_types.h"

class FlyByWireModelClass
{
 public:
  struct rtDW_LagFilter_FlyByWire_T {
    real_T pY;
    real_T pU;
    boolean_T pY_not_empty;
    boolean_T pU_not_empty;
  };

  struct rtDW_WashoutFilter_FlyByWire_T {
    real_T pY;
    real_T pU;
    boolean_T pY_not_empty;
    boolean_T pU_not_empty;
  };

  struct rtDW_RateLimiter_FlyByWire_T {
    real_T pY;
    boolean_T pY_not_empty;
  };

  struct rtDW_eta_trim_limit_lofreeze_FlyByWire_T {
    real_T frozen_eta_trim;
    boolean_T frozen_eta_trim_not_empty;
  };

  struct BlockIO_FlyByWire_T {
    real_T in_flight;
    real_T flare_Theta_c_deg;
    real_T flare_Theta_c_rate_deg_s;
  };

  struct D_Work_FlyByWire_T {
    real_T Delay_DSTATE;
    real_T Delay_DSTATE_d;
    real_T Delay_DSTATE_dq;
    real_T Delay_DSTATE_f;
    real_T Delay_DSTATE_dd;
    real_T Delay_DSTATE_e;
    real_T Delay_DSTATE_i;
    real_T Delay_DSTATE_j;
    real_T Delay_DSTATE_c;
    real_T Delay1_DSTATE;
    real_T Delay_DSTATE_p;
    real_T Delay_DSTATE_m;
    real_T Delay1_DSTATE_i;
    real_T Delay_DSTATE_g;
    real_T Delay_DSTATE_l;
    real_T Delay_DSTATE_b;
    real_T Delay_DSTATE_o;
    real_T Delay_DSTATE_h;
    real_T Delay_DSTATE_dz;
    real_T Delay_DSTATE_bk;
    real_T Delay_DSTATE_ps;
    real_T Delay_DSTATE_c1;
    real_T Delay1_DSTATE_o;
    real_T Delay_DSTATE_l5;
    real_T Delay_DSTATE_n;
    real_T Delay1_DSTATE_n;
    real_T Delay_DSTATE_k;
    real_T Delay_DSTATE_ca;
    real_T Delay_DSTATE_jv;
    real_T Delay_DSTATE_fi;
    real_T Delay_DSTATE_ds;
    real_T Delay_DSTATE_jw;
    real_T Delay_DSTATE_ez;
    real_T Delay_DSTATE_gk;
    real_T Delay_DSTATE_py;
    real_T Delay_DSTATE_es;
    real_T Delay_DSTATE_f1;
    real_T Delay_DSTATE_hh;
    real_T Delay_DSTATE_ea;
    real_T Delay_DSTATE_eu;
    real_T Delay_DSTATE_dj;
    real_T Delay_DSTATE_mp;
    real_T Delay_DSTATE_f3;
    real_T eventTime;
    real_T pY;
    real_T on_ground_time;
    real_T sProtActive;
    real_T eventTime_b;
    real_T resetEventTime;
    real_T sProtActive_c;
    real_T sAlphaFloor;
    uint8_T is_active_c5_FlyByWire;
    uint8_T is_c5_FlyByWire;
    uint8_T is_active_c6_FlyByWire;
    uint8_T is_c6_FlyByWire;
    uint8_T is_active_c7_FlyByWire;
    uint8_T is_c7_FlyByWire;
    uint8_T is_active_c8_FlyByWire;
    uint8_T is_c8_FlyByWire;
    uint8_T is_active_c3_FlyByWire;
    uint8_T is_c3_FlyByWire;
    uint8_T is_active_c9_FlyByWire;
    uint8_T is_c9_FlyByWire;
    uint8_T is_active_c2_FlyByWire;
    uint8_T is_c2_FlyByWire;
    uint8_T is_active_c15_FlyByWire;
    uint8_T is_c15_FlyByWire;
    uint8_T is_active_c1_FlyByWire;
    uint8_T is_c1_FlyByWire;
    boolean_T icLoad;
    boolean_T icLoad_e;
    boolean_T icLoad_i;
    boolean_T icLoad_l;
    boolean_T icLoad_d;
    boolean_T eventTime_not_empty;
    boolean_T pY_not_empty;
    boolean_T eventTime_not_empty_c;
    boolean_T resetEventTime_not_empty;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_b5;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_pr;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_bu;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_e;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_n;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_d0;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_h;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_mi;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_e;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_f;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_d;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_ny;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_np;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_at;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_pc;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_fr;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_gp;
    rtDW_eta_trim_limit_lofreeze_FlyByWire_T sf_eta_trim_limit_upfreeze;
    rtDW_eta_trim_limit_lofreeze_FlyByWire_T sf_eta_trim_limit_lofreeze;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_a;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_m;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_g;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_b;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_lo;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_l;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_p;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter_i;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_p;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_n;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter_k;
    rtDW_RateLimiter_FlyByWire_T sf_RateLimiter;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_ht;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter_l;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_l;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter_c;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_i;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter_b;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_f;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter_o;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_h;
    rtDW_WashoutFilter_FlyByWire_T sf_WashoutFilter;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter_a;
    rtDW_LagFilter_FlyByWire_T sf_LagFilter;
  };

  struct ExternalInputs_FlyByWire_T {
    fbw_input in;
  };

  struct ExternalOutputs_FlyByWire_T {
    fbw_output out;
  };

  struct Parameters_FlyByWire_T {
    fbw_output fbw_output_MATLABStruct;
    real_T ScheduledGain_BreakpointsForDimension1[4];
    real_T ScheduledGain_BreakpointsForDimension1_p[4];
    real_T ScheduledGain_BreakpointsForDimension1_d[4];
    real_T ScheduledGain_BreakpointsForDimension1_n[4];
    real_T ScheduledGain_BreakpointsForDimension1_h[4];
    real_T ScheduledGain_BreakpointsForDimension1_c[5];
    real_T ScheduledGain_BreakpointsForDimension1_j[5];
    real_T ScheduledGain_BreakpointsForDimension1_a[7];
    real_T ScheduledGain1_BreakpointsForDimension1[7];
    real_T ScheduledGain_BreakpointsForDimension1_jh[4];
    real_T ScheduledGain_BreakpointsForDimension1_cf[9];
    real_T ScheduledGain1_BreakpointsForDimension1_a[5];
    real_T LagFilter_C1;
    real_T LagFilter_C1_a;
    real_T LagFilter_C1_n;
    real_T LagFilter_C1_i;
    real_T Subsystem2_C1;
    real_T Subsystem_C1;
    real_T LagFilter_C1_j;
    real_T WashoutFilter_C1;
    real_T LagFilter_C1_d;
    real_T WashoutFilter_C1_c;
    real_T LagFilter1_C1;
    real_T WashoutFilter_C1_j;
    real_T Subsystem1_C1;
    real_T Subsystem3_C1;
    real_T LagFilter_C1_h;
    real_T WashoutFilter_C1_e;
    real_T LagFilter_C1_d2;
    real_T WashoutFilter_C1_a;
    real_T LagFilter_C1_e;
    real_T WashoutFilter_C1_ji;
    real_T LagFilter1_C1_j;
    real_T LagFilter2_C1;
    real_T LagFilter3_C1;
    real_T LagFilter_C1_em;
    real_T DiscreteDerivativeVariableTs_Gain;
    real_T DiscreteDerivativeVariableTs_Gain_c;
    real_T DiscreteDerivativeVariableTs_Gain_b;
    real_T DiscreteTimeIntegratorVariableTs_Gain;
    real_T Subsystem2_Gain;
    real_T Subsystem_Gain;
    real_T DiscreteDerivativeVariableTs1_Gain;
    real_T DiscreteDerivativeVariableTs_Gain_l;
    real_T DiscreteDerivativeVariableTs2_Gain;
    real_T DiscreteDerivativeVariableTs1_Gain_k;
    real_T DiscreteDerivativeVariableTs_Gain_f;
    real_T DiscreteDerivativeVariableTs2_Gain_g;
    real_T Subsystem1_Gain;
    real_T Subsystem3_Gain;
    real_T DiscreteDerivativeVariableTs1_Gain_b;
    real_T DiscreteDerivativeVariableTs_Gain_e;
    real_T DiscreteDerivativeVariableTs2_Gain_a;
    real_T DiscreteDerivativeVariableTs1_Gain_p;
    real_T DiscreteDerivativeVariableTs_Gain_bf;
    real_T DiscreteDerivativeVariableTs2_Gain_j;
    real_T DiscreteDerivativeVariableTs1_Gain_kf;
    real_T DiscreteDerivativeVariableTs_Gain_ea;
    real_T DiscreteDerivativeVariableTs2_Gain_b;
    real_T DiscreteTimeIntegratorVariableTs_Gain_k;
    real_T DiscreteTimeIntegratorVariableTsLimit_Gain;
    real_T DiscreteTimeIntegratorVariableTs_Gain_m;
    real_T DiscreteTimeIntegratorVariableTs1_Gain;
    real_T RateLimiterVariableTs2_InitialCondition;
    real_T RateLimiterVariableTs3_InitialCondition;
    real_T RateLimiterVariableTs_InitialCondition;
    real_T RateLimiterVariableTs1_InitialCondition;
    real_T DiscreteDerivativeVariableTs_InitialCondition;
    real_T RateLimiterVariableTs_InitialCondition_d;
    real_T RateLimiterVariableTs1_InitialCondition_h;
    real_T RateLimiterVariableTs2_InitialCondition_b;
    real_T RateLimiterVariableTs3_InitialCondition_b;
    real_T RateLimiterDynamicVariableTs_InitialCondition;
    real_T RateLimiterVariableTs_InitialCondition_n;
    real_T DiscreteDerivativeVariableTs_InitialCondition_d;
    real_T DiscreteDerivativeVariableTs_InitialCondition_k;
    real_T RateLimiterVariableTs3_InitialCondition_e;
    real_T RateLimiterVariableTs1_InitialCondition_hb;
    real_T RateLimiterVariableTs_InitialCondition_c;
    real_T DiscreteDerivativeVariableTs2_InitialCondition;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_c;
    real_T RateLimiterVariableTs4_InitialCondition;
    real_T DiscreteDerivativeVariableTs1_InitialCondition;
    real_T RateLimiterVariableTs6_InitialCondition;
    real_T DiscreteDerivativeVariableTs_InitialCondition_kb;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_i;
    real_T DiscreteDerivativeVariableTs1_InitialCondition_f;
    real_T DiscreteDerivativeVariableTs_InitialCondition_m;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_iw;
    real_T RateLimiterVariableTs2_InitialCondition_j;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_cx;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_b;
    real_T RateLimiterVariableTs5_InitialCondition;
    real_T DiscreteDerivativeVariableTs1_InitialCondition_fh;
    real_T DiscreteDerivativeVariableTs_InitialCondition_c;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_h;
    real_T DiscreteDerivativeVariableTs1_InitialCondition_h;
    real_T DiscreteDerivativeVariableTs_InitialCondition_j;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_o;
    real_T DiscreteDerivativeVariableTs1_InitialCondition_i;
    real_T DiscreteDerivativeVariableTs_InitialCondition_p;
    real_T DiscreteDerivativeVariableTs2_InitialCondition_d;
    real_T RateLimiterDynamicVariableTs_InitialCondition_i;
    real_T RateLimiterVariableTs_InitialCondition_f;
    real_T RateLimiterVariableTs_InitialCondition_m;
    real_T RateLimiterVariableTs_InitialCondition_j;
    real_T RateLimiterVariableTs1_InitialCondition_m;
    real_T RateLimiterVariableTs_InitialCondition_fa;
    real_T RateLimiterDynamicVariableTs_InitialCondition_b;
    real_T RateLimitereta_InitialCondition;
    real_T RateLimiterxi_InitialCondition;
    real_T RateLimiterzeta_InitialCondition;
    real_T RateLimiterVariableTs1_InitialCondition_o;
    real_T DiscreteTimeIntegratorVariableTs_LowerLimit;
    real_T DiscreteTimeIntegratorVariableTs_LowerLimit_b;
    real_T DiscreteTimeIntegratorVariableTs_LowerLimit_c;
    real_T DiscreteTimeIntegratorVariableTs1_LowerLimit;
    real_T ScheduledGain_Table[4];
    real_T ScheduledGain_Table_l[4];
    real_T ScheduledGain_Table_b[4];
    real_T ScheduledGain_Table_g[4];
    real_T ScheduledGain_Table_ga[4];
    real_T ScheduledGain_Table_p[5];
    real_T ScheduledGain_Table_i[5];
    real_T ScheduledGain_Table_e[7];
    real_T ScheduledGain1_Table[7];
    real_T ScheduledGain_Table_c[4];
    real_T ScheduledGain_Table_d[9];
    real_T ScheduledGain1_Table_o[5];
    real_T DiscreteTimeIntegratorVariableTs_UpperLimit;
    real_T DiscreteTimeIntegratorVariableTs_UpperLimit_c;
    real_T DiscreteTimeIntegratorVariableTs_UpperLimit_n;
    real_T DiscreteTimeIntegratorVariableTs1_UpperLimit;
    real_T CompareToConstant_const;
    real_T CompareToConstant_const_o;
    real_T RateLimiterVariableTs2_lo;
    real_T RateLimiterVariableTs3_lo;
    real_T RateLimiterVariableTs_lo;
    real_T RateLimiterVariableTs1_lo;
    real_T RateLimiterVariableTs_lo_c;
    real_T RateLimiterVariableTs1_lo_c;
    real_T RateLimiterVariableTs2_lo_m;
    real_T RateLimiterVariableTs3_lo_l;
    real_T RateLimiterVariableTs_lo_d;
    real_T RateLimiterVariableTs3_lo_e;
    real_T RateLimiterVariableTs1_lo_h;
    real_T RateLimiterVariableTs_lo_f;
    real_T RateLimiterVariableTs4_lo;
    real_T RateLimiterVariableTs6_lo;
    real_T RateLimiterVariableTs2_lo_n;
    real_T RateLimiterVariableTs5_lo;
    real_T RateLimiterVariableTs_lo_fs;
    real_T RateLimiterVariableTs_lo_k;
    real_T RateLimiterVariableTs_lo_g;
    real_T RateLimiterVariableTs1_lo_n;
    real_T RateLimiterVariableTs_lo_e;
    real_T RateLimitereta_lo;
    real_T RateLimiterxi_lo;
    real_T RateLimiterzeta_lo;
    real_T RateLimiterVariableTs1_lo_cu;
    real_T RateLimiterVariableTs2_up;
    real_T RateLimiterVariableTs3_up;
    real_T RateLimiterVariableTs_up;
    real_T RateLimiterVariableTs1_up;
    real_T RateLimiterVariableTs_up_d;
    real_T RateLimiterVariableTs1_up_n;
    real_T RateLimiterVariableTs2_up_f;
    real_T RateLimiterVariableTs3_up_c;
    real_T RateLimiterVariableTs_up_dl;
    real_T RateLimiterVariableTs3_up_m;
    real_T RateLimiterVariableTs1_up_k;
    real_T RateLimiterVariableTs_up_f;
    real_T RateLimiterVariableTs4_up;
    real_T RateLimiterVariableTs6_up;
    real_T RateLimiterVariableTs2_up_b;
    real_T RateLimiterVariableTs5_up;
    real_T RateLimiterVariableTs_up_k;
    real_T RateLimiterVariableTs_up_m;
    real_T RateLimiterVariableTs_up_i;
    real_T RateLimiterVariableTs1_up_j;
    real_T RateLimiterVariableTs_up_f1;
    real_T RateLimitereta_up;
    real_T RateLimiterxi_up;
    real_T RateLimiterzeta_up;
    real_T RateLimiterVariableTs1_up_p;
    boolean_T CompareToConstant_const_h;
    real_T Constant_Value;
    real_T Gain4_Gain;
    real_T qk_dot_gain1_Gain;
    real_T qk_gain_HSP_Gain;
    real_T v_dot_gain_HSP_Gain;
    real_T Gain6_Gain;
    real_T precontrol_gain_HSP_Gain;
    real_T HSP_gain_Gain;
    real_T Saturation4_UpperSat;
    real_T Saturation4_LowerSat;
    real_T Saturation8_UpperSat;
    real_T Saturation8_LowerSat;
    real_T Constant1_Value;
    real_T Gain_Gain;
    real_T Saturation_UpperSat;
    real_T Saturation_LowerSat;
    real_T Constant_Value_m;
    real_T Loaddemand_tableData[3];
    real_T Loaddemand_bp01Data[3];
    real_T Switch_Threshold;
    real_T Constant_Value_k;
    real_T Saturation_UpperSat_o;
    real_T Saturation_LowerSat_k;
    real_T Switch2_Threshold;
    real_T Saturation_UpperSat_g;
    real_T Saturation_LowerSat_p;
    real_T Constant1_Value_i;
    real_T Constant2_Value;
    real_T Constant3_Value;
    real_T Gain2_Gain;
    real_T BankAngleProtection2_tableData[5];
    real_T BankAngleProtection2_bp01Data[5];
    real_T BankAngleProtection_tableData[9];
    real_T BankAngleProtection_bp01Data[9];
    real_T BankAngleProtection1_tableData[9];
    real_T BankAngleProtection1_bp01Data[9];
    real_T Switch2_Threshold_i;
    real_T Switch1_Threshold;
    real_T Constant2_Value_d;
    real_T Constant_Value_j;
    real_T Delay_InitialCondition;
    real_T GainTheta_Gain;
    real_T GainPhi_Gain;
    real_T Gain_Gain_n;
    real_T Gainqk_Gain;
    real_T Gain_Gain_l;
    real_T Gain_Gain_a;
    real_T Gainpk_Gain;
    real_T Gain_Gain_e;
    real_T Gainqk1_Gain;
    real_T Gain_Gain_aw;
    real_T Gain_Gain_nm;
    real_T Gainpk1_Gain;
    real_T Gainpk4_Gain;
    real_T Gainpk2_Gain;
    real_T Gainpk5_Gain;
    real_T Gainpk6_Gain;
    real_T Gainpk3_Gain;
    real_T Gain_Gain_i;
    real_T Constant_Value_g;
    real_T Saturation_UpperSat_e;
    real_T Saturation_LowerSat_e;
    real_T Gain1_Gain;
    real_T Saturation1_UpperSat;
    real_T Saturation1_LowerSat;
    real_T Gain2_Gain_a;
    real_T Saturation2_UpperSat;
    real_T Saturation2_LowerSat;
    real_T Gaineta_Gain;
    real_T Gainxi_Gain;
    real_T Gainxi1_Gain;
    real_T alphamax_tableData[24];
    real_T alphamax_bp01Data[4];
    real_T alphamax_bp02Data[6];
    real_T alpha0_tableData[6];
    real_T alpha0_bp01Data[6];
    real_T alphaprotection_tableData[24];
    real_T alphaprotection_bp01Data[4];
    real_T alphaprotection_bp02Data[6];
    real_T alphafloor_tableData[24];
    real_T alphafloor_bp01Data[4];
    real_T alphafloor_bp02Data[6];
    real_T Constant5_Value;
    real_T Constant6_Value;
    real_T Gain1_Gain_c;
    real_T uDLookupTable1_tableData[4];
    real_T uDLookupTable1_bp01Data[4];
    real_T uDLookupTable2_tableData[4];
    real_T uDLookupTable2_bp01Data[4];
    real_T uDLookupTable_tableData[4];
    real_T uDLookupTable_bp01Data[4];
    real_T Constant7_Value;
    real_T Constant8_Value;
    real_T Switch_Threshold_h;
    real_T Switch1_Threshold_k;
    real_T Gain_Gain_d;
    real_T Saturation_UpperSat_er;
    real_T Saturation_LowerSat_a;
    real_T Constant1_Value_f;
    real_T Constant_Value_jz;
    real_T Saturation1_UpperSat_f;
    real_T Saturation1_LowerSat_p;
    real_T Constant2_Value_l;
    real_T uDLookupTable_tableData_d[25];
    real_T uDLookupTable_bp01Data_l[5];
    real_T uDLookupTable_bp02Data[5];
    real_T Saturation3_UpperSat;
    real_T Saturation3_LowerSat;
    real_T PitchRateDemand_tableData[3];
    real_T PitchRateDemand_bp01Data[3];
    real_T Gain3_Gain;
    real_T Gain_Gain_h;
    real_T Gain1_Gain_i;
    real_T Gain1_Gain_a;
    real_T Gain5_Gain;
    real_T Gain4_Gain_g;
    real_T Gain6_Gain_f;
    real_T Constant_Value_h;
    real_T Switch_Threshold_he;
    real_T Gain1_Gain_p;
    real_T Gain1_Gain_pa;
    real_T Gain1_Gain_j;
    real_T Vm_currentms_Value;
    real_T Gain_Gain_dc;
    real_T Delay_InitialCondition_j;
    real_T Constant_Value_m3;
    real_T Delay1_InitialCondition;
    real_T Delay_InitialCondition_l;
    real_T Constant_Value_hz;
    real_T Delay1_InitialCondition_a;
    real_T Switch1_Threshold_ke;
    real_T Gain3_Gain_j;
    real_T Gain1_Gain_c4;
    real_T Vm_currentms_Value_l;
    real_T Gain_Gain_i4;
    real_T uDLookupTable_tableData_c[7];
    real_T uDLookupTable_bp01Data_f[7];
    real_T Saturation3_UpperSat_k;
    real_T Saturation3_LowerSat_l;
    real_T Gain5_Gain_k;
    real_T Bias_Bias;
    real_T Gain2_Gain_g;
    real_T Gain1_Gain_d;
    real_T Saturation1_UpperSat_h;
    real_T Saturation1_LowerSat_o;
    real_T Loaddemand1_tableData[3];
    real_T Loaddemand1_bp01Data[3];
    real_T PLUT_tableData[2];
    real_T PLUT_bp01Data[2];
    real_T DLUT_tableData[2];
    real_T DLUT_bp01Data[2];
    real_T SaturationV_dot_UpperSat;
    real_T SaturationV_dot_LowerSat;
    real_T Gain_Gain_de;
    real_T SaturationSpoilers_UpperSat;
    real_T SaturationSpoilers_LowerSat;
    real_T Saturation_UpperSat_i;
    real_T Saturation_LowerSat_f;
    real_T Gain3_Gain_jk;
    real_T Gain1_Gain_g;
    real_T Vm_currentms_Value_e;
    real_T Gain_Gain_g;
    real_T uDLookupTable_tableData_e[7];
    real_T uDLookupTable_bp01Data_d[7];
    real_T Saturation3_UpperSat_l;
    real_T Saturation3_LowerSat_n;
    real_T Gain5_Gain_i;
    real_T Bias_Bias_b;
    real_T PLUT_tableData_j[2];
    real_T PLUT_bp01Data_j[2];
    real_T DLUT_tableData_p[2];
    real_T DLUT_bp01Data_p[2];
    real_T SaturationV_dot_UpperSat_e;
    real_T SaturationV_dot_LowerSat_c;
    real_T Gain_Gain_f;
    real_T SaturationSpoilers_UpperSat_h;
    real_T SaturationSpoilers_LowerSat_h;
    real_T Saturation_UpperSat_h;
    real_T Saturation_LowerSat_l;
    real_T Delay_InitialCondition_k;
    real_T Constant_Value_kr;
    real_T Delay1_InitialCondition_i;
    real_T precontrol_gain_Gain;
    real_T alpha_err_gain_Gain;
    real_T Delay_InitialCondition_p;
    real_T Constant_Value_c;
    real_T Delay1_InitialCondition_k;
    real_T v_dot_gain_Gain;
    real_T qk_gain_Gain;
    real_T qk_dot_gain_Gain;
    real_T Saturation3_UpperSat_c;
    real_T Saturation3_LowerSat_h;
    real_T Saturation_UpperSat_a;
    real_T Saturation_LowerSat_ps;
    real_T Constant_Value_p;
    real_T Gain3_Gain_l;
    real_T uDLookupTable_tableData_l[7];
    real_T uDLookupTable_bp01Data_j[7];
    real_T Saturation3_UpperSat_p;
    real_T Saturation3_LowerSat_i;
    real_T Gain5_Gain_g;
    real_T Bias_Bias_d;
    real_T Saturation_UpperSat_d;
    real_T Saturation_LowerSat_pr;
    real_T Gain1_Gain_b;
    real_T PLUT_tableData_e[2];
    real_T PLUT_bp01Data_h[2];
    real_T DLUT_tableData_m[2];
    real_T DLUT_bp01Data_a[2];
    real_T SaturationV_dot_UpperSat_ee;
    real_T SaturationV_dot_LowerSat_m;
    real_T Gain_Gain_o;
    real_T SaturationSpoilers_UpperSat_c;
    real_T SaturationSpoilers_LowerSat_n;
    real_T Saturation_UpperSat_j;
    real_T Saturation_LowerSat_c;
    real_T Gain3_Gain_c;
    real_T Gain1_Gain_gs;
    real_T Vm_currentms_Value_c;
    real_T Gain_Gain_hy;
    real_T uDLookupTable_tableData_p[7];
    real_T uDLookupTable_bp01Data_lk[7];
    real_T Saturation3_UpperSat_b;
    real_T Saturation3_LowerSat_c;
    real_T Gain5_Gain_e;
    real_T Bias_Bias_dw;
    real_T PLUT_tableData_l[2];
    real_T PLUT_bp01Data_i[2];
    real_T DLUT_tableData_a[2];
    real_T DLUT_bp01Data_f[2];
    real_T SaturationV_dot_UpperSat_j;
    real_T SaturationV_dot_LowerSat_m3;
    real_T Gain_Gain_f0;
    real_T SaturationSpoilers_UpperSat_ci;
    real_T SaturationSpoilers_LowerSat_j;
    real_T Saturation_UpperSat_f;
    real_T Saturation_LowerSat_lf;
    real_T Gain3_Gain_n;
    real_T Gain1_Gain_gh;
    real_T Vm_currentms_Value_h;
    real_T Gain_Gain_et;
    real_T uDLookupTable_tableData_j[7];
    real_T uDLookupTable_bp01Data_le[7];
    real_T Saturation3_UpperSat_d;
    real_T Saturation3_LowerSat_a;
    real_T Gain5_Gain_p;
    real_T Bias_Bias_n;
    real_T Theta_max3_Value;
    real_T Gain3_Gain_m;
    real_T Saturation2_UpperSat_g;
    real_T Saturation2_LowerSat_i;
    real_T Loaddemand2_tableData[3];
    real_T Loaddemand2_bp01Data[3];
    real_T PLUT_tableData_j5[2];
    real_T PLUT_bp01Data_b[2];
    real_T DLUT_tableData_ah[2];
    real_T DLUT_bp01Data_ai[2];
    real_T SaturationV_dot_UpperSat_d;
    real_T SaturationV_dot_LowerSat_d;
    real_T Gain_Gain_fw;
    real_T SaturationSpoilers_UpperSat_j;
    real_T SaturationSpoilers_LowerSat_f;
    real_T Saturation_UpperSat_eo;
    real_T Saturation_LowerSat_ar;
    real_T Switch_Threshold_d;
    real_T Saturation_UpperSat_g4;
    real_T Saturation_LowerSat_la;
    real_T Constant_Value_o;
    real_T Saturation_UpperSat_c;
    real_T Saturation_LowerSat_m;
    real_T Constant_Value_ju;
    real_T Gain_Gain_ip;
    real_T Gain_Gain_c;
    real_T uDLookupTable_tableData_f[4];
    real_T uDLookupTable_bp01Data_fm[4];
    real_T Gain1_Gain_jh;
    real_T Saturation_UpperSat_p;
    real_T Saturation_LowerSat_h;
    real_T Gain4_Gain_f;
    real_T Saturation_UpperSat_l;
    real_T Saturation_LowerSat_cj;
    real_T Gain5_Gain_l;
    real_T Saturation1_UpperSat_fa;
    real_T Saturation1_LowerSat_om;
    real_T Gain_Gain_oq;
    real_T Gain1_Gain_bq;
    real_T Switch3_Threshold;
    real_T Saturation_UpperSat_as;
    real_T Saturation_LowerSat_o;
    real_T Delay_InitialCondition_d;
    real_T Saturation_UpperSat_gn;
    real_T Saturation_LowerSat_en;
    real_T Switch_Threshold_j;
    real_T Gain1_Gain_n;
    real_T Gain1_Gain_bqd;
    real_T Gain1_Gain_cb;
    real_T Gain_Gain_p;
    real_T Constant2_Value_p;
    real_T Gain1_Gain_f;
    real_T Gain1_Gain_l;
    real_T Saturation_UpperSat_ek;
    real_T Saturation_LowerSat_j;
    real_T Gain6_Gain_k;
    real_T Gain_Gain_i3;
    real_T Saturation1_UpperSat_j;
    real_T Saturation1_LowerSat_a;
    real_T Saturation_UpperSat_n;
    real_T Saturation_LowerSat_b;
    real_T Constant_Value_ku;
    real_T Saturation2_UpperSat_n;
    real_T Saturation2_LowerSat_a;
    real_T Saturation_UpperSat_cr;
    real_T Saturation_LowerSat_o4;
    real_T Constant_Value_i;
    real_T Switch2_Threshold_n;
    real_T Saturation_UpperSat_p4;
    real_T Saturation_LowerSat_he;
    real_T Saturation1_UpperSat_e;
    real_T Saturation1_LowerSat_l;
    real_T Saturation_UpperSat_ll;
    real_T Saturation_LowerSat_og;
    real_T Constant_Value_l;
    real_T Saturation_UpperSat_eq;
    real_T Saturation_LowerSat_n;
    real_T Saturation_UpperSat_il;
    real_T Saturation_LowerSat_fr;
    real_T Constant_Value_f;
    real_T Gain4_Gain_e;
    real_T Constant_Value_li;
    real_T Constant1_Value_h;
    real_T Gaineta_Gain_d;
    real_T Limitereta_UpperSat;
    real_T Limitereta_LowerSat;
    real_T GainiH_Gain;
    real_T LimiteriH_UpperSat;
    real_T LimiteriH_LowerSat;
    real_T Gainxi_Gain_n;
    real_T Limiterxi_UpperSat;
    real_T Limiterxi_LowerSat;
    real_T Gainxi1_Gain_e;
    real_T Limiterxi1_UpperSat;
    real_T Limiterxi1_LowerSat;
    real_T Gainxi2_Gain;
    real_T Limiterxi2_UpperSat;
    real_T Limiterxi2_LowerSat;
    uint32_T alphamax_maxIndex[2];
    uint32_T alphaprotection_maxIndex[2];
    uint32_T alphafloor_maxIndex[2];
    uint32_T uDLookupTable_maxIndex[2];
    uint8_T ManualSwitch_CurrentSetting;
    uint8_T ManualSwitch1_CurrentSetting;
  };

  FlyByWireModelClass(FlyByWireModelClass const&) =delete;
  FlyByWireModelClass& operator= (FlyByWireModelClass const&) & = delete;
  void setExternalInputs(const ExternalInputs_FlyByWire_T *pExternalInputs_FlyByWire_T)
  {
    FlyByWire_U = *pExternalInputs_FlyByWire_T;
  }

  const ExternalOutputs_FlyByWire_T &getExternalOutputs() const
  {
    return FlyByWire_Y;
  }

  void initialize();
  void step();
  static void terminate();
  FlyByWireModelClass();
  ~FlyByWireModelClass();
 private:
  ExternalInputs_FlyByWire_T FlyByWire_U;
  ExternalOutputs_FlyByWire_T FlyByWire_Y;
  BlockIO_FlyByWire_T FlyByWire_B;
  D_Work_FlyByWire_T FlyByWire_DWork;
  static Parameters_FlyByWire_T FlyByWire_P;
  static void FlyByWire_GetIASforMach4(real_T rtu_m, real_T rtu_m_t, real_T rtu_v, real_T *rty_v_t);
  static void FlyByWire_LagFilter(real_T rtu_U, real_T rtu_C1, real_T rtu_dt, real_T *rty_Y, rtDW_LagFilter_FlyByWire_T *
    localDW);
  static void FlyByWire_WashoutFilter(real_T rtu_U, real_T rtu_C1, real_T rtu_dt, real_T *rty_Y,
    rtDW_WashoutFilter_FlyByWire_T *localDW);
  static void FlyByWire_RateLimiter(real_T rtu_u, real_T rtu_up, real_T rtu_lo, real_T rtu_Ts, real_T rtu_init, real_T
    *rty_Y, rtDW_RateLimiter_FlyByWire_T *localDW);
  static void FlyByWire_VoterAttitudeProtection(real_T rtu_input, real_T rtu_input_o, real_T rtu_input_c, real_T
    *rty_vote);
  static void FlyByWire_eta_trim_limit_lofreeze(real_T rtu_eta_trim, real_T rtu_trigger, real_T *rty_y,
    rtDW_eta_trim_limit_lofreeze_FlyByWire_T *localDW);
  static void FlyByWire_ConvertToEuler(real_T rtu_Theta, real_T rtu_Phi, real_T rtu_q, real_T rtu_r, real_T rtu_p,
    real_T *rty_qk, real_T *rty_rk, real_T *rty_pk);
  static void FlyByWire_CalculateV_alpha_max(real_T rtu_v_ias, real_T rtu_alpha, real_T rtu_alpha_0, real_T
    rtu_alpha_target, real_T *rty_V_alpha_target);
};

#endif

