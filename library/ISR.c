/*
 * File:   ISR.c
 * Author: Fabio Jr. Rossi.
 *
 * Interrupt service routine implementation.
 */

#include "../library/ISR.h"   // Include interrupt service routine header.
#include <xc.h>               // Standard compiler library. 

// Interrupt service routine, standard function used for interrupts in pic 16f,
// __interrupt() is a function of xc8 library.
void __interrupt() ISR(void) {
	if(T0IF){       // If timer 0 overflow (interrupt flag).
        counter++;  // Increment counter.       
        T0IF = 0;   // Reset flag for new interrupt of timer. 
    };
};

