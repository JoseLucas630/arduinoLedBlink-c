/*este programa é simplesmente uma mera copia
de um programa ja feito pelo youtuber "Low Level Learning"*/

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    //define a porta b5 como saída
    DDRB = DDRB | (1 << DDB5);

    while(1){ //loop
    PORTB = PORTB | (1<<PORTB5); //define a porta b5
    _delay_ms(1000); //auto descritivo
    PORTB = PORTB & ~ (1<<PORTB5); //retira a porta  b5 para que ela desligue
    _delay_ms(1000); //novamente, auto descritivo
    }
}