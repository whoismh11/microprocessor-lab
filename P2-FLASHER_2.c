#include <mega16.h>
#include <delay.h>

int i, j;

void main() {
    DDRC = 0xFF;
    
    while(1) {
        for(i = 1, j = 128; i < 128; i = i*2, j = j/2) {
            PORTC = i+j;
            delay_ms(100);
            if(i == 8) {
                PORTC = 0;
                delay_ms(100);
            }
        }
    }
}
