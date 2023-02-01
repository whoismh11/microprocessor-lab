#include <mega16.h>
#include <delay.h>

int i;

void main() {
    DDRA = 0xFF;
    DDRC.0 = 0;
    PORTC.0 = 1;

    while (1) {
        if (PINC == 1) {
            for (i = 0; i < 16; i++) {
                PORTA = i;
                delay_ms(1000);
                if (PINC == 0) {
                    break;
                }
            }
        } else {
            PORTA = 0x00;
        }
    }
}
