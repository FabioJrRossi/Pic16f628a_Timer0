/*
 * File:   ISR.h
 * Author: Fabio Jr. Rossi.
 *
 * Interrupt service routine header.
 */

#ifndef __ISR_H     // Conditional compilation, if macro __ISR_H is already defined, don't include this library again.
#define __ISR_H     // Macro for this file.

int counter = 0;    // Variable for count.

// Function prototype.
void __interrupt() ISR(void);             

#endif      // End ifndef.