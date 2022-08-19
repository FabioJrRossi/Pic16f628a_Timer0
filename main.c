/*
 * File:   main.c
 * Author: Fabio Jr. Rossi.
 *
 * Main file of the project.
 */

// PIC16F628A Configuration Bit Settings
#pragma config FOSC = INTOSCCLK     // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF           // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF          // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF          // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is digital input, MCLR internally tied to VDD)
#pragma config BOREN = OFF          // Brown-out Detect Enable bit (BOD disabled)
#pragma config LVP = OFF            // Low-Voltage Programming Enable bit (RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming)
#pragma config CPD = OFF            // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF             // Flash Program Memory Code Protection bit (Code protection off)

#include <xc.h>     // Standard library of compiler.
#include "library/Includes.h"     // Include librarys ISR and TIMER0.

#define LED PORTAbits.RA0   // Macro for led (PORTA RA0 pin).

void main(void) {
    CMCON = 0b00000111;     // Disable PORTA comparator.
    TRISA = 0b00000000;     // All PORTA pins set as output.
    
    InitTimer0();   // Initializing timer 0, function of library TIMER0   
    
    while (1) {
        if(counter > 1000){ // Testing counter of TIMER0 library.
            LED = ~LED;     // Toggle led.
            counter = 0;    // Reset counter.
        };
    };
    
    return;
}

