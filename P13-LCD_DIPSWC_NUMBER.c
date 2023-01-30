#include <stdio.h>
#include <mega16.h>
#include <delay.h>
#include <alcd.h>

char i, str[16];

void main() {
    DDRD = 0x00;
    PORTD = 0xFF;
    lcd_init(16);
    
    while(1) {
        i = ~PIND;
        lcd_clear();
        lcd_gotoxy(0, 0);
        sprintf(str, "Number=%u", i);
        lcd_puts(str);
        delay_ms(500);
    }
}
