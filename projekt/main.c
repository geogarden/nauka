/*
 * main.c
 *
 *  Created on: 8 lut 2021
 *      Author: geoga
 */
// podstawa programów demonstracyjnych //
// wykorzystujących bezwładnośc wzroku //
// ------- Preambula -------- //

#include <avr/io.h>
#include <util/delay.h>

// -------- Funkcje --------- //
void POVDisplay( uint8_t oneByte ) {
    PORTB = oneByte;
    _delay_ms( 2 );
}
int main( void ) {
// -------- Inicjacja --------- //
    DDRB = 0xff; /* Wszystkie piny z diodami LED ustaw jako wyjscia */
// ------ petla zdarzen ------ //
    while ( 1 ) { /* petla glowna */
        POVDisplay( 0b00001110 );
        POVDisplay( 0b00011000 );
        POVDisplay( 0b10111101 );
        POVDisplay( 0b01110110 );
        POVDisplay( 0b00111100 );
        POVDisplay( 0b00111100 );
        POVDisplay( 0b00111100 );
        POVDisplay( 0b01110110 );
        POVDisplay( 0b10111101 );
        POVDisplay( 0b00011000 );
        POVDisplay( 0b00001110 );
        PORTB = 0;
        _delay_ms( 10 );
    } /* koniec pętli głównej */
    return ( 0 );
}
