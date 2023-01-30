#include <mega16.h>

void main() {
    DDRC.3 = 1;
    DDRA.0 = 0;
    DDRA.4 = 0;
    PORTA.0 = 1;
    PORTA.4 = 1;
    
    while(1) {
        if(PINA.0 == 0 & PINA.4 == 0) {
            PORTC.3 = 1;
        }
        else
        {
            PORTC.3 = 0;
        }
    }
}
