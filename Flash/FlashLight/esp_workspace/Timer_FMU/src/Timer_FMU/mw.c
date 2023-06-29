/* @date 2023-06-29T13:06:23.900169815Z */

/**********************************************************************
 * @file mw.c
 *
 * Automatically generated by Software Producer Engineer
 * Runtime code generator @version 1.0.0
 **********************************************************************/

#include "mw_cfg.h"
#include "mw_hook.h"

#define RTE_C /* Macro to include only some specific parts of include files */
#include "Timer_itf.h"

#ifdef RTE_DEBUG
#include <stdio.h>
#define debug(...) printf(__VA_ARGS__); fflush(stdout)
#else
#define debug(...)
#endif


task_descriptor task_descriptors[NUMBER_OF_TASKS];


/*
 * Rte instances declaration
 */
Rte_Timer_Struct Timer_inst;

/*
 * Shared variables definitions
 */
Boolean from_UNCONNECTED_light_snd;
SignalEvent_On_type from_UNCONNECTED_light_On;
SignalEvent_Off_type from_UNCONNECTED_light_Off;
SignalEvent_Tick_type from_UNCONNECTED_light_Tick;
Boolean from_UNCONNECTED_control_snd;
SignalEvent_On_type from_UNCONNECTED_control_On;
SignalEvent_Off_type from_UNCONNECTED_control_Off;
SignalEvent_Tick_type from_UNCONNECTED_control_Tick;
SignalEvent_On_type from_UNCONNECTED_InputSignal_On;
SignalEvent_Off_type from_UNCONNECTED_InputSignal_Off;

/*
 * Triggering functions
 */
void RTE_Trigger_Timer_light_On(void){

	RTE_TriggerHook_Timer_light_On_Start(&from_UNCONNECTED_light_On);
	debug("DEBUG: RTE_Trigger_Timer_light_On: Enter\\\n");
	unsigned int byteIdx;
	from_UNCONNECTED_light_On.trigger = 1;
	debug("DEBUG: RTE_Write_Timer_light_On: Exit\\\n");
	RTE_TriggerHook_Timer_light_On_Return(&from_UNCONNECTED_light_On);
}

void RTE_Trigger_Timer_light_Off(void){

	RTE_TriggerHook_Timer_light_Off_Start(&from_UNCONNECTED_light_Off);
	debug("DEBUG: RTE_Trigger_Timer_light_Off: Enter\\\n");
	unsigned int byteIdx;
	from_UNCONNECTED_light_Off.trigger = 1;
	debug("DEBUG: RTE_Write_Timer_light_Off: Exit\\\n");
	RTE_TriggerHook_Timer_light_Off_Return(&from_UNCONNECTED_light_Off);
}

void RTE_Trigger_Timer_light_Tick(void){

	RTE_TriggerHook_Timer_light_Tick_Start(&from_UNCONNECTED_light_Tick);
	debug("DEBUG: RTE_Trigger_Timer_light_Tick: Enter\\\n");
	unsigned int byteIdx;
	from_UNCONNECTED_light_Tick.trigger = 1;
	debug("DEBUG: RTE_Write_Timer_light_Tick: Exit\\\n");
	RTE_TriggerHook_Timer_light_Tick_Return(&from_UNCONNECTED_light_Tick);
}


/*
 * Send functions
 */
void RTE_Write_Timer_light_snd(Boolean* data){
	// Copy byte by byte
	unsigned int byteIdx;

	RTE_WriteHook_Timer_light_snd_Start(&from_UNCONNECTED_light_snd);
	debug("DEBUG: RTE_Write_Timer_light_snd: Enter\\\n");

	for(byteIdx=0; byteIdx < sizeof(Boolean); byteIdx++){
		((char*) &from_UNCONNECTED_light_snd)[byteIdx] = ((char*) data)[byteIdx];
	}

	debug("DEBUG: RTE_Write_Timer_light_snd: Exit\\\n");
	RTE_WriteHook_Timer_light_snd_Return(&from_UNCONNECTED_light_snd);
}


/*
 * Read functions
 */
void RTE_Read_Timer_control_snd(Boolean* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_control_snd_Start(&from_UNCONNECTED_control_snd);
	RTE_ReadHook_Timer_control_snd_Return(&from_UNCONNECTED_control_snd);
	for(byteIdx=0; byteIdx < sizeof(Boolean); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_control_snd)[byteIdx];
	}
}

void RTE_Read_Timer_control_On(SignalEvent_On_type* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_control_On_Start(&from_UNCONNECTED_control_On);
	for(byteIdx=0; byteIdx < sizeof(SignalEvent_On_type); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_control_On)[byteIdx];
	}
	from_UNCONNECTED_control_On.trigger = 0;
	RTE_ReadHook_Timer_control_On_Return(&from_UNCONNECTED_control_On);
}

void RTE_Read_Timer_control_Off(SignalEvent_Off_type* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_control_Off_Start(&from_UNCONNECTED_control_Off);
	for(byteIdx=0; byteIdx < sizeof(SignalEvent_Off_type); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_control_Off)[byteIdx];
	}
	from_UNCONNECTED_control_Off.trigger = 0;
	RTE_ReadHook_Timer_control_Off_Return(&from_UNCONNECTED_control_Off);
}

void RTE_Read_Timer_control_Tick(SignalEvent_Tick_type* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_control_Tick_Start(&from_UNCONNECTED_control_Tick);
	for(byteIdx=0; byteIdx < sizeof(SignalEvent_Tick_type); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_control_Tick)[byteIdx];
	}
	from_UNCONNECTED_control_Tick.trigger = 0;
	RTE_ReadHook_Timer_control_Tick_Return(&from_UNCONNECTED_control_Tick);
}

void RTE_Read_Timer_InputSignal_On(SignalEvent_On_type* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_InputSignal_On_Start(&from_UNCONNECTED_InputSignal_On);
	for(byteIdx=0; byteIdx < sizeof(SignalEvent_On_type); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_InputSignal_On)[byteIdx];
	}
	from_UNCONNECTED_InputSignal_On.trigger = 0;
	RTE_ReadHook_Timer_InputSignal_On_Return(&from_UNCONNECTED_InputSignal_On);
}

void RTE_Read_Timer_InputSignal_Off(SignalEvent_Off_type* data){
	unsigned int byteIdx;

	RTE_ReadHook_Timer_InputSignal_Off_Start(&from_UNCONNECTED_InputSignal_Off);
	for(byteIdx=0; byteIdx < sizeof(SignalEvent_Off_type); byteIdx++){
		((char*) data)[byteIdx] = ((char*) &from_UNCONNECTED_InputSignal_Off)[byteIdx];
	}
	from_UNCONNECTED_InputSignal_Off.trigger = 0;
	RTE_ReadHook_Timer_InputSignal_Off_Return(&from_UNCONNECTED_InputSignal_Off);
}


/*
 * Server call functions
 */

double RTE_GetTime(void);

/*
 * Map the communication APIs to component instances
 */
void component_instances_init(void){
  /* BEG: Timer Rte Instance configuration */
  /* Write functions */
  Timer_inst.Write_light_snd = &RTE_Write_Timer_light_snd;
  /* Trigger functions */
  Timer_inst.Trigger_light_On = &RTE_Trigger_Timer_light_On;
  Timer_inst.Trigger_light_Off = &RTE_Trigger_Timer_light_Off;
  Timer_inst.Trigger_light_Tick = &RTE_Trigger_Timer_light_Tick;
  /* Read functions */
  Timer_inst.Read_control_snd = &RTE_Read_Timer_control_snd;
  Timer_inst.Read_control_On = &RTE_Read_Timer_control_On;
  Timer_inst.Read_control_Off = &RTE_Read_Timer_control_Off;
  Timer_inst.Read_control_Tick = &RTE_Read_Timer_control_Tick;
  Timer_inst.Read_InputSignal_On = &RTE_Read_Timer_InputSignal_On;
  Timer_inst.Read_InputSignal_Off = &RTE_Read_Timer_InputSignal_Off;
  /* Server call functions */
  Timer_inst.GetTime = &RTE_GetTime;
  /* END: Timer Rte Instance configuration */

}

/*
 * Tasks initialization
 *
 * A56 - 12/6/2019: Initialization of global variables is done at runtime
 * because for some boards or compiling option static initialization fails
 * True for RIOT but code below could be done at variable declaration for Adaptive
 */
void task_descriptors_init(void){


}

void components_init(void) {
	Timer_Timer_init(&Timer_inst);
}

/* end of file */
