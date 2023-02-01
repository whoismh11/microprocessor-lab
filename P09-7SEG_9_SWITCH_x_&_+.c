#include <mega16.h>

int seg[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void main() {
    DDRA = 0x00;
    DDRB = 0x00;
    DDRC = 0x00;
    DDRD = 0xFF;
    PORTA.0 = 1;
    PORTA.1 = 1;
    PORTB.0 = 1;
    PORTB.1 = 1;
    PORTC.0 = 1;

    while (1) {
        if (PINC.0 == 0) {
            PORTD = seg[PINA + PINB];
        } else {
            PORTD = seg[PINA * PINB];
        }
    }
}
