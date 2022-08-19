/*
 * File:   Includes.h
 * Author: Fabio Jr. Rossi.
 *
 * Support header file for includes.
 */

#ifndef __INCLUDES_H    // Conditional compilation, if macro __INCLUDES_H is already defined, don't include this library again.
#define __INCLUDES_H    // Macro for this file.

#define _XTAL_FREQ   4000000    // CPU frequency setting in 4 Mhz, needed to use some function.

#include <xc.h>     // Standard compiler library.                           
#include "TIMER0.h" // Timer 0 library.
#include "ISR.h"    // Interrupt service routine library. 

#endif  // End ifndef.    