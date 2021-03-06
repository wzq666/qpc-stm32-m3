/*****************************************************************************
* Model: qpc-stm32-m3.qm
* File:  ..//include/qm/qm_signals.h
*
* This code has been generated by QM tool (see state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*****************************************************************************/
/*${../::include::qm::qm_signals.h} ........................................*/
#ifndef __QM_SIGNALS_H__
#define __QM_SIGNALS_H__


#include "qp_port.h"

enum faba_qpc_signals
{
    /*faba signal start value*/
    START_SIG= Q_USER_SIG,

    /*leds events*/
    LEDS_IN_TIMEOUT_SIG,


    /*softdevice events*/
    STACK_SWI2_SIG,
    STACK_SYS_EVENT_SIG,
    STACK_BLE_EVENT_SIG,

    SENSOR_TIMEOUT_SIG,

    MAX_SIG,
};

#endif
