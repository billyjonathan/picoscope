/****************************************************************************
 *
 * Filename:    ps6000aApiExperimental.h
 * Copyright:   Pico Technology Limited 2002 - 2020
 * Author:      JFJ
 * Description:
 *
 * This header defines the interface to driver routines for the
 *  PicoScope 6000 range of PC Oscilloscopes.
 *
 * These functions are at the beta stage of development and their
 * signatures may change.
 *
 ****************************************************************************/

#ifndef __PS6000AAPIEXPERIMENTAL_H__
#define __PS6000AAPIEXPERIMENTAL_H__


#include "ps6000aApi.h"
#include "PicoCallback.h"

typedef void (PREF4 *ps6000aDigitalPortInteractions)
(
  int16_t    											handle,
  PICO_STATUS											status,
  PICO_DIGITAL_PORT_INTERACTIONS *	ports,
  uint32_t												nPorts
  );

PREF0 PREF1 PICO_STATUS PREF2 PREF3(ps6000aSetDigitalPortInteractionCallback)
(
  int16_t													handle,
  ps6000aDigitalPortInteractions	callback
  );

PREF0 PREF1 PICO_STATUS PREF2 PREF3(ps6000aSetProbeInteractionCallback)
(
  int16_t		handle,
  PicoProbeInteractions callback
  );

PREF0 PREF1 PICO_STATUS PREF2 PREF3(ps6000aSetExternalReferenceInteractionCallback)
(
  int16_t		handle,
  PicoExternalReferenceInteractions callback
  );

PREF0 PREF1 PICO_STATUS PREF2 PREF3(ps6000aSetAWGOverrangeInteractionCallback)
(
  int16_t		handle,
  PicoAWGOverrangeInteractions callback
  );

PREF0 PREF1 PICO_STATUS PREF2 PREF3(ps6000aSetTemperatureSensorInteractionCallback)
(
  int16_t		handle,
  PicoTemperatureSensorInteractions callback
  );

#endif