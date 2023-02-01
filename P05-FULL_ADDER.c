#include <mega16.h>

void main() {
    DDRC = 0xFF;
    DDRA = 0x00;
    PORTA = 0xFF;

    while (1) {
        PORTC.0 = PINA.0 ^ PINA.3 ^ PINA.7;
        PORTC.7 = (PINA.0 & PINA.3) | (PINA.7 & (PINA.0 ^ PINA.3));
    }
}
