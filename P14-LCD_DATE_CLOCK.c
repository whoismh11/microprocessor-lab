#include <stdio.h>
#include <mega16.h>
#include <delay.h>
#include <alcd.h>

int y, x, d, h, m, s;
char lcd[16];

void main() {
    lcd_init(16);
    
    while(1) {
        for(y = 0; y < 10000; y++) {
            for(x = 0; x < 13; x++) {
                for(d = 0; d < 32; d++) {
                    for(h = 0; h < 24; h++) {
                        for(m = 0; m < 60; m++) {
                            for(s = 0; s < 60; s++) {
                                lcd_gotoxy(4, 0);
                                sprintf(lcd, "%02d:%02d:%02d", h, m, s);
                                lcd_puts(lcd);
                                lcd_gotoxy(3, 1);
                                sprintf(lcd, "%04d:%02d:%02d", y, x, d);
                                lcd_puts(lcd);
                                delay_ms(1000);
                            }
                        }
                    }
                }
            }
        }
    }
}
