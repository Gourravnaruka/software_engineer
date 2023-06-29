/* @date 2023-06-29T13:07:22.913933054Z */

/**********************************************************************
 * @file fmuSpecific.h
 * fmuSpecific for FMI 2.0
 * 
 * Automatically generated by Software Producer Engineer
 * FMU middleware generator @version 100
 **********************************************************************/

#ifndef __FMU_SPECIFIC_H__
#define __FMU_SPECIFIC_H__

#include "fmuFramework.h"
#include "mw_cfg.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus*/

#define MULTI_INSTANTIATION_NOT_ALLOWED 0

//Light_light_On
//trigger
#define VRB_Light_light_On_trigger 1
//Light_light_Off
//trigger
#define VRB_Light_light_Off_trigger 2
//Light_light_Tick
//trigger
#define VRB_Light_light_Tick_trigger 3
//Light_light_snd
#define VRB_Light_light_snd 4
//Light_InputSignal_Tick
//trigger
#define VRB_Light_InputSignal_Tick_trigger 5
//Light_pout_io
#define VRB_Light_pout_io 6


typedef struct {
	trigger_type Light_light_On_trigger;
	char Light_light_On_trigger_isChanged;
	trigger_type Light_light_Off_trigger;
	char Light_light_Off_trigger_isChanged;
	trigger_type Light_light_Tick_trigger;
	char Light_light_Tick_trigger_isChanged;
	Boolean Light_light_snd;
	char Light_light_snd_isChanged;
	trigger_type Light_InputSignal_Tick_trigger;
	char Light_InputSignal_Tick_trigger_isChanged;
	Boolean Light_pout_io;
	char Light_pout_io_isChanged;


} sPrivateCtx;

fmi2Real     getFmuReal     (FMUInstance* comp, const fmi2ValueReference iValueRef);
fmi2Integer  getFmuInteger  (FMUInstance* comp, const fmi2ValueReference iValueRef);
fmi2Boolean  getFmuBoolean  (FMUInstance* comp, const fmi2ValueReference iValueRef);
fmi2String   getFmuString   (FMUInstance* comp, const fmi2ValueReference iValueRef);

void setFmuReal     (FMUInstance* comp, const fmi2ValueReference iValueRef, const fmi2Real fValue);
void setFmuInteger  (FMUInstance* comp, const fmi2ValueReference iValueRef, const fmi2Integer iValue);
void setFmuBoolean  (FMUInstance* comp, const fmi2ValueReference iValueRef, const fmi2Boolean bValue);
void setFmuString   (FMUInstance* comp, const fmi2ValueReference iValueRef, const fmi2String acValue);

void fmuInstanciate		   (FMUInstance* comp);
void fmuInitSpecificContext(FMUInstance* comp);
void fmuInit               (FMUInstance* comp);
void fmuFinalizeInit       (FMUInstance* comp);
void fmuUninit             (FMUInstance* comp);
void fmuStep               (FMUInstance* comp, fmi2Real currentCommunicationPoint, fmi2Real communicationStepSize, fmi2Boolean newStep);

void setFMUInstance(FMUInstance* fmuInstance);
void runScheduler(fmi2Real currentCommunicationPoint, fmi2Real communicationStepSize);
void runPeriodic_comp(task_descriptor* config);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __FMU_SPECIFIC_H__ */

/* end of file */
