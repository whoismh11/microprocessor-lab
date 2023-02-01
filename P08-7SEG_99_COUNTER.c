#include <mega16.h>
#include <delay.h>

int i, j, seg[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void main() {
    DDRC = 0xFF;
    DDRD = 0xFF;

    while (1) {
        for (i = 0; i <= 9; i++) {
            PORTD = seg[i];
            for (j = 0; j <= 9; j++) {
                PORTC = seg[j];
                delay_ms(300);
            }
        }
    }
}
