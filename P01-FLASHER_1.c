#include <mega16.h>
#include <delay.h>

int i;

void main() {
    DDRC = 0xFF;

    while (1) {
        for (i = 1; i < 128; i = i * 2) {
            PORTC = i;
            delay_ms(100);
        }
        for (i = 128; i > 1; i = i / 2) {
            PORTC = i;
            delay_ms(100);
        }
    }
}
