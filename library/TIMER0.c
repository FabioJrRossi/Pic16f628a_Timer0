/*
 * File:   TIMER0.c
 * Author: Fabio Jr. Rossi.
 *
 * Timer 0 implementation.
 */

#include "../library/TIMER0.h"    // Include timer 0 header..
#include <xc.h>                   // Standard compiler library.

// Setting registers of timer 0.
void InitTimer0(void) {
    OPTION_REG = 0b00000000; // Prescaler rate = 1:2
    T0IE = 1;   // Enable timer 0  interrupt.
    GIE =1;     // Enable global interrupts.
  
};
