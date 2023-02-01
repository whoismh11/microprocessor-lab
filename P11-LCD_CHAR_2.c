#include <mega16.h>
#include <delay.h>
#include <alcd.h>

int i, j;
char lcd1[] = "      Mamad", lcd2[] = "      Hadad";

void main() {
    lcd_init(16);

    while (1) {
        for (i = 6; i < 11; i++) {
            lcd_gotoxy(i, 0);
            lcd_putchar(lcd1[i]);
            delay_ms(150);
        }
        for (j = 6; j < 11; j++) {
            lcd_gotoxy(j, 1);
            lcd_putchar(lcd2[j]);
            delay_ms(150);
        }
        lcd_clear();
        delay_ms(150);
    }
}
