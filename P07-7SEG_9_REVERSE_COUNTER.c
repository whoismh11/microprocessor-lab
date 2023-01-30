#include <mega16.h>
#include <delay.h>

int i;
int seg[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void main() {
    DDRC = 0xFF;
    
    while(1) {
        for(i = 9; i >= 0; i--) {
            PORTC = seg[i];
            delay_ms(1000);
        }
    }
}
