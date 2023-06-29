/* @date 2023-06-29T13:07:22.916386669Z */

/**********************************************************************
 * @file task_descriptor.h
 *
 * Automatically generated by Software Producer Engineer
 * FMU middleware generator @version 100
 **********************************************************************/

/**********************************************************************
 * This file describes the task descriptor structure.
 * The task descriptor is a structure containing field specific to targets
 * and additional common members.
 * This file must exist and have this exact name
 **********************************************************************/

#ifndef TASK_DESCRIPTOR_H
#define TASK_DESCRIPTOR_H

#include <stdint.h> // uint8_t, uint16_t

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/**********************************************************************
 * task_descriptor structure definition
 **********************************************************************/

typedef void (*function_ptr)(void*);
typedef void* rte_instance_ptr;

#define PERIODIC 0
#define TRIGGER_ON_DATA_RECEPTION 1

typedef struct _task_descriptor{
  uint8_t type;
  uint16_t period; // can be moved in the periodic info struct
  function_ptr* functions;
  rte_instance_ptr* rte_instances;
  uint8_t nfunctions;
}task_descriptor;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* TASK_DESCRIPTOR_H */

/* end of file */
