#include <mega16.h>
#include <delay.h>

int i, arr[8] = {0b00011000, 0b00111100, 0b01100110, 0b01100110, 0b01111110, 0b01100110, 0b01100110, 0b00000000}; //A

void main() {
    DDRA = 0xFF;
    DDRB = 0xFF;
    
    while(1) {
        for(i = 0; i < 8; i++) {
            PORTA = arr[i];
            PORTB = ~(1<<i);
            delay_us(10);
            PORTB = 0xFF;
        }
    }
}
