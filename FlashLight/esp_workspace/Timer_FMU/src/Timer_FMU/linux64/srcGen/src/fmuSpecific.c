/* @date 2023-06-29T13:06:23.883437902Z */

/**********************************************************************
 * @file fmuSpecific.c
 * fmuSpecific for FMI 2.0
 * 
 * Automatically generated by Software Producer Engineer
 * FMU middleware generator @version 100
 **********************************************************************/
 
#include <string.h>
#include "fmuFramework.h"
#include "fmuSpecific.h"

#ifdef _MSC_VER
	#define strcasecmp  _stricmp
	#define strncasecmp _strnicmp
	#define snprintf    _snprintf
	#define usleep(X)   Sleep(X/1000)
#endif // _MSC_VER //

FMUInstance* fmuInst;

/* FMU Interface functions section --------------*/

/**
 * fmuInitSpecificContext()
 */
void fmuInitSpecificContext(FMUInstance* fmuInstance) {
	if(!fmuInstance->privateCtx) {
		fmuInstance->privateCtx = (void*)malloc(sizeof(sPrivateCtx));
		memset(fmuInstance->privateCtx, 0, sizeof(sPrivateCtx));

	}
}

/**
 * getFmuReal()
 */
fmi2Real getFmuReal(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef) {
	fmi2Real fValue = 0.0;
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to get real: '%d'", iValueRef);
			}
	}
	return fValue;
}

/**
 * getFmuInteger()
 */
fmi2Integer getFmuInteger(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef) {
	fmi2Integer iValue = 0;
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to get integer: '%d'", iValueRef);
			}
	}
	return iValue;
}

/**
 * getFmuBoolean()
 */
fmi2Boolean getFmuBoolean(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef) {
	fmi2Boolean bValue = 0;
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInstance->privateCtx;
	switch(iValueRef) {
		case VRB_Timer_control_On_trigger:
			bValue = pPrivateCtx->Timer_control_On_trigger;
			pPrivateCtx->Timer_control_On_trigger = 0;
			break;
		case VRB_Timer_control_Off_trigger:
			bValue = pPrivateCtx->Timer_control_Off_trigger;
			pPrivateCtx->Timer_control_Off_trigger = 0;
			break;
		case VRB_Timer_control_Tick_trigger:
			bValue = pPrivateCtx->Timer_control_Tick_trigger;
			pPrivateCtx->Timer_control_Tick_trigger = 0;
			break;
		case VRB_Timer_control_snd:
			bValue = pPrivateCtx->Timer_control_snd;
			break;
		case VRB_Timer_InputSignal_On_trigger:
			bValue = pPrivateCtx->Timer_InputSignal_On_trigger;
			pPrivateCtx->Timer_InputSignal_On_trigger = 0;
			break;
		case VRB_Timer_InputSignal_Off_trigger:
			bValue = pPrivateCtx->Timer_InputSignal_Off_trigger;
			pPrivateCtx->Timer_InputSignal_Off_trigger = 0;
			break;
		case VRB_Timer_light_On_trigger:
			bValue = pPrivateCtx->Timer_light_On_trigger;
			pPrivateCtx->Timer_light_On_trigger = 0;
			break;
		case VRB_Timer_light_Off_trigger:
			bValue = pPrivateCtx->Timer_light_Off_trigger;
			pPrivateCtx->Timer_light_Off_trigger = 0;
			break;
		case VRB_Timer_light_Tick_trigger:
			bValue = pPrivateCtx->Timer_light_Tick_trigger;
			pPrivateCtx->Timer_light_Tick_trigger = 0;
			break;
		case VRB_Timer_light_snd:
			bValue = pPrivateCtx->Timer_light_snd;
			break;

		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to get boolean: '%d'", iValueRef);
			}
	}
	return bValue;
}

/**
 * getFmuString()
 */
fmi2String getFmuString(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef) {
	fmi2String acValue = "";
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to get string: '%d'", iValueRef);
			}
	}
	return acValue;
}

/**
 * setFmuReal()
 */
void setFmuReal(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef, const fmi2Real fValue) {
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to set real: '%d'", iValueRef);
			}
	}
}

/**
 * setFmuInteger()
 */
void setFmuInteger(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef, const fmi2Integer iValue) {
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to set integer: '%d'", iValueRef);
			}
	}
}

/**
 * setFmuBoolean()
 */
void setFmuBoolean(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef, const fmi2Boolean bValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInstance->privateCtx;
	switch(iValueRef) {
		case VRB_Timer_control_On_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_control_On_trigger_isChanged = 1;
				pPrivateCtx->Timer_control_On_trigger = bValue;
			}
			break;
		case VRB_Timer_control_Off_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_control_Off_trigger_isChanged = 1;
				pPrivateCtx->Timer_control_Off_trigger = bValue;
			}
			break;
		case VRB_Timer_control_Tick_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_control_Tick_trigger_isChanged = 1;
				pPrivateCtx->Timer_control_Tick_trigger = bValue;
			}
			break;
		case VRB_Timer_control_snd:
			pPrivateCtx->Timer_control_snd_isChanged = 1;
			pPrivateCtx->Timer_control_snd = bValue;
			break;
		case VRB_Timer_InputSignal_On_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_InputSignal_On_trigger_isChanged = 1;
				pPrivateCtx->Timer_InputSignal_On_trigger = bValue;
			}
			break;
		case VRB_Timer_InputSignal_Off_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_InputSignal_Off_trigger_isChanged = 1;
				pPrivateCtx->Timer_InputSignal_Off_trigger = bValue;
			}
			break;
		case VRB_Timer_light_On_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_light_On_trigger_isChanged = 1;
				pPrivateCtx->Timer_light_On_trigger = bValue;
			}
			break;
		case VRB_Timer_light_Off_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_light_Off_trigger_isChanged = 1;
				pPrivateCtx->Timer_light_Off_trigger = bValue;
			}
			break;
		case VRB_Timer_light_Tick_trigger:
			if(bValue == 1){
				pPrivateCtx->Timer_light_Tick_trigger_isChanged = 1;
				pPrivateCtx->Timer_light_Tick_trigger = bValue;
			}
			break;
		case VRB_Timer_light_snd:
			pPrivateCtx->Timer_light_snd_isChanged = 1;
			pPrivateCtx->Timer_light_snd = bValue;
			break;

		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to set boolean: '%d'", iValueRef);
			}
	}
}

/**
 * setFmuString()
 */
void setFmuString(FMUInstance* fmuInstance, const fmi2ValueReference iValueRef, const fmi2String acValue) {
	switch(iValueRef) {
		case 0:
			break;
		default:
			if (fmuInstance->debugLoggingOn) {
				fmuInstance->logger(fmuInstance, fmuInstance->instanceName, fmi2Warning, "warning", "Unable to set string: '%d'", iValueRef);
			}
	}
}

/**
 * fmuInstanciate()
 */
void fmuInstanciate(FMUInstance* fmuInstance) {
	fmuInitSpecificContext(fmuInstance);
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInstance->privateCtx;
	pPrivateCtx->Timer_control_On_trigger = 0;
	pPrivateCtx->Timer_control_On_trigger_isChanged = 0;
	pPrivateCtx->Timer_control_Off_trigger = 0;
	pPrivateCtx->Timer_control_Off_trigger_isChanged = 0;
	pPrivateCtx->Timer_control_Tick_trigger = 0;
	pPrivateCtx->Timer_control_Tick_trigger_isChanged = 0;
	pPrivateCtx->Timer_control_snd = 0;
	pPrivateCtx->Timer_control_snd_isChanged = 0;
	pPrivateCtx->Timer_InputSignal_On_trigger = 0;
	pPrivateCtx->Timer_InputSignal_On_trigger_isChanged = 0;
	pPrivateCtx->Timer_InputSignal_Off_trigger = 0;
	pPrivateCtx->Timer_InputSignal_Off_trigger_isChanged = 0;
	pPrivateCtx->Timer_light_On_trigger = 0;
	pPrivateCtx->Timer_light_On_trigger_isChanged = 0;
	pPrivateCtx->Timer_light_Off_trigger = 0;
	pPrivateCtx->Timer_light_Off_trigger_isChanged = 0;
	pPrivateCtx->Timer_light_Tick_trigger = 0;
	pPrivateCtx->Timer_light_Tick_trigger_isChanged = 0;
	pPrivateCtx->Timer_light_snd = 0;
	pPrivateCtx->Timer_light_snd_isChanged = 0;

}

void fmuInit(FMUInstance* fmuInstance) {
	component_instances_init();
	task_descriptors_init();
	components_init();
}

void fmuFinalizeInit(FMUInstance* fmuInstance) {
}

void fmuStep(FMUInstance* fmuInstance, fmi2Real currentCommunicationPoint, fmi2Real communicationStepSize, fmi2Boolean newStep) {
	setFMUInstance(fmuInstance);
	runScheduler(currentCommunicationPoint, communicationStepSize);
}

void fmuUninit(FMUInstance* fmuInstance) {

}

void setFMUInstance(FMUInstance* fmuInstance){
	fmuInst = fmuInstance;
}

/* Scheduler functions section ------------------*/

/* systemTime */ 
static double systemTime = 0.0;

/**
 * Application scheduler
 * Perform the time computation and execute code accordingly
 */
void runScheduler(fmi2Real currentSec, fmi2Real stepSizeSec){
	long long currentMilliSec = currentSec * 1000;
	long long stepSizeMilliSec = stepSizeSec * 1000;
	long long stepMilliSec = currentMilliSec;
	while (stepMilliSec < currentMilliSec + stepSizeMilliSec) {
		for (int i = 0; i < NUMBER_OF_TASKS; i++){
			task_descriptor* config = &task_descriptors[i];
			if (config->type == PERIODIC) {
				if (stepMilliSec % config->period == 0) {
					runPeriodic_comp(config);
				}
			}
		}
		stepMilliSec++;
		systemTime = ((double)stepMilliSec) / 1000;
	}
}

void runPeriodic_comp(task_descriptor* config) {
	int i = 0;
	for (i = 0; i < config->nfunctions; i++) {
		config->functions[i]((void*) (config->rte_instances[i]));
	}
}

double RTE_GetTime(void){
	return systemTime;
}

/* Hook functions section -----------------------*/

void RTE_ReadHook_Timer_control_On_Start(SignalEvent_On_type* iValue) {
}

void RTE_ReadHook_Timer_control_On_Return(SignalEvent_On_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_control_On_trigger_isChanged == 1){
		(*iValue).trigger = pPrivateCtx->Timer_control_On_trigger;
		pPrivateCtx->Timer_control_On_trigger_isChanged = 0;
	}
}

void RTE_ReadHook_Timer_control_Off_Start(SignalEvent_Off_type* iValue) {
}

void RTE_ReadHook_Timer_control_Off_Return(SignalEvent_Off_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_control_Off_trigger_isChanged == 1){
		(*iValue).trigger = pPrivateCtx->Timer_control_Off_trigger;
		pPrivateCtx->Timer_control_Off_trigger_isChanged = 0;
	}
}

void RTE_ReadHook_Timer_control_Tick_Start(SignalEvent_Tick_type* iValue) {
}

void RTE_ReadHook_Timer_control_Tick_Return(SignalEvent_Tick_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_control_Tick_trigger_isChanged == 1){
		(*iValue).trigger = pPrivateCtx->Timer_control_Tick_trigger;
		pPrivateCtx->Timer_control_Tick_trigger_isChanged = 0;
	}
}

void RTE_ReadHook_Timer_control_snd_Start(Boolean* iValue) {
}

void RTE_ReadHook_Timer_control_snd_Return(Boolean* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_control_snd_isChanged == 1){
		(*iValue) = pPrivateCtx->Timer_control_snd;
		pPrivateCtx->Timer_control_snd_isChanged = 0;
	}
}

void RTE_ReadHook_Timer_InputSignal_On_Start(SignalEvent_On_type* iValue) {
}

void RTE_ReadHook_Timer_InputSignal_On_Return(SignalEvent_On_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_InputSignal_On_trigger_isChanged == 1){
		(*iValue).trigger = pPrivateCtx->Timer_InputSignal_On_trigger;
		pPrivateCtx->Timer_InputSignal_On_trigger_isChanged = 0;
	}
}

void RTE_ReadHook_Timer_InputSignal_Off_Start(SignalEvent_Off_type* iValue) {
}

void RTE_ReadHook_Timer_InputSignal_Off_Return(SignalEvent_Off_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	if(pPrivateCtx->Timer_InputSignal_Off_trigger_isChanged == 1){
		(*iValue).trigger = pPrivateCtx->Timer_InputSignal_Off_trigger;
		pPrivateCtx->Timer_InputSignal_Off_trigger_isChanged = 0;
	}
}

void RTE_TriggerHook_Timer_light_On_Start(SignalEvent_On_type* iValue) {
}

void RTE_TriggerHook_Timer_light_On_Return(SignalEvent_On_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	pPrivateCtx->Timer_light_On_trigger = (*iValue).trigger;
}

void RTE_TriggerHook_Timer_light_Off_Start(SignalEvent_Off_type* iValue) {
}

void RTE_TriggerHook_Timer_light_Off_Return(SignalEvent_Off_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	pPrivateCtx->Timer_light_Off_trigger = (*iValue).trigger;
}

void RTE_TriggerHook_Timer_light_Tick_Start(SignalEvent_Tick_type* iValue) {
}

void RTE_TriggerHook_Timer_light_Tick_Return(SignalEvent_Tick_type* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	pPrivateCtx->Timer_light_Tick_trigger = (*iValue).trigger;
}

void RTE_WriteHook_Timer_light_snd_Start(Boolean* iValue) {
}

void RTE_WriteHook_Timer_light_snd_Return(Boolean* iValue) {
	sPrivateCtx* pPrivateCtx = (sPrivateCtx*)fmuInst->privateCtx;
	pPrivateCtx->Timer_light_snd = (*iValue);
}



/* end of file */
