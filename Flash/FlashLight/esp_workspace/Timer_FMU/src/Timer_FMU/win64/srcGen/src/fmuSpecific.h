/* @date 2023-06-29T13:06:23.873323864Z */

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

//Timer_control_On
//trigger
#define VRB_Timer_control_On_trigger 1
//Timer_control_Off
//trigger
#define VRB_Timer_control_Off_trigger 2
//Timer_control_Tick
//trigger
#define VRB_Timer_control_Tick_trigger 3
//Timer_control_snd
#define VRB_Timer_control_snd 4
//Timer_InputSignal_On
//trigger
#define VRB_Timer_InputSignal_On_trigger 5
//Timer_InputSignal_Off
//trigger
#define VRB_Timer_InputSignal_Off_trigger 6
//Timer_light_On
//trigger
#define VRB_Timer_light_On_trigger 7
//Timer_light_Off
//trigger
#define VRB_Timer_light_Off_trigger 8
//Timer_light_Tick
//trigger
#define VRB_Timer_light_Tick_trigger 9
//Timer_light_snd
#define VRB_Timer_light_snd 10


typedef struct {
	trigger_type Timer_control_On_trigger;
	char Timer_control_On_trigger_isChanged;
	trigger_type Timer_control_Off_trigger;
	char Timer_control_Off_trigger_isChanged;
	trigger_type Timer_control_Tick_trigger;
	char Timer_control_Tick_trigger_isChanged;
	Boolean Timer_control_snd;
	char Timer_control_snd_isChanged;
	trigger_type Timer_InputSignal_On_trigger;
	char Timer_InputSignal_On_trigger_isChanged;
	trigger_type Timer_InputSignal_Off_trigger;
	char Timer_InputSignal_Off_trigger_isChanged;
	trigger_type Timer_light_On_trigger;
	char Timer_light_On_trigger_isChanged;
	trigger_type Timer_light_Off_trigger;
	char Timer_light_Off_trigger_isChanged;
	trigger_type Timer_light_Tick_trigger;
	char Timer_light_Tick_trigger_isChanged;
	Boolean Timer_light_snd;
	char Timer_light_snd_isChanged;


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
