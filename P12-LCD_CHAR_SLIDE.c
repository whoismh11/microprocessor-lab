#include <mega16.h>
#include <delay.h>
#include <alcd.h>

int i;
char lcd[] = "MH11";

void main() {
    lcd_init(16);
    
    while(1) {
        for(i = 16; i > -5; i--) {
            if(i < 0 & i > -5) {
                lcd_gotoxy(0, 0);
            }
            else
            {
                lcd_gotoxy(i, 0);
            }
            if(i < 16 & i > -1) {
                lcd_putchar(lcd[0]);
            }
            if(i < 15 & i > -2) {
                lcd_putchar(lcd[1]);
            }
            if(i < 14 & i > -3) {
                lcd_putchar(lcd[2]);
            }
            if(i < 13 & i > -4) {
                lcd_putchar(lcd[3]);
            }
            delay_ms(100);
            lcd_clear();
        }
    }
}
