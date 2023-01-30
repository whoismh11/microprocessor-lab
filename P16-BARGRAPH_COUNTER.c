#include <mega16.h>

int i;
interrupt[10] void timer0_ovf_isr() {
    TCNT0 = 131;
    i++;
    PORTA = i;
}

void main() {
    DDRA = 0xFF;
    TCCR0 = 0b00000100;
    TIMSK = 0b00000001;
    TCNT0 = 131;
    #asm("sei");
}
