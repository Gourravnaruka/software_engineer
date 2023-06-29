/* @date 2023-06-29T13:07:22.932396693Z */

/**********************************************************************
 * @file mw_cfg.h
 *
 * Automatically generated by Software Producer Engineer
 * Runtime code generator @version 1.0.0
 **********************************************************************/

#ifndef MW_CFG_H
#define MW_CFG_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "task_descriptor.h" /* task_descriptor declaration */

#include "Light_type.h"

#define NUMBER_OF_TASKS 1

/*
 * Tasks ids definition
 */

/*
 * Runnables in tasks position index definition
 * Required to trigger the proper function in a specific task
 */

#define NB_INST_LIGHT 1

void component_instances_init(void);
void task_descriptors_init(void);
void components_init(void);

/*
 * Shared variables definitions
 */
// extern Boolean from_UNCONNECTED_pout_io;
// extern Boolean from_UNCONNECTED_light_snd;
// extern SignalEvent_On_type from_UNCONNECTED_light_On;
// extern SignalEvent_Off_type from_UNCONNECTED_light_Off;
// extern SignalEvent_Tick_type from_UNCONNECTED_light_Tick;
// extern SignalEvent_Tick_type from_UNCONNECTED_InputSignal_Tick;

/*
 * Event Triggered functions
 */

/*
 * Shared variable functions
 *
 * Define a direct access to a memory location through a pointer
 */

/*
 * task_descriptors variable is declared in the common part of the runtime
 * and is used in the target specific part. so it is made available via
 * this extern definition.
 */
extern task_descriptor task_descriptors[NUMBER_OF_TASKS];

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* MW_CFG_H */

/* end of file */
