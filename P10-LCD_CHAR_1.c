#include <mega16.h>
#include <delay.h>
#include <alcd.h>

void main() {
    lcd_init(16);
    
    while(1) {
        lcd_gotoxy(6, 0);
        lcd_putsf("Mamad");
        delay_ms(300);
        lcd_clear();
        lcd_gotoxy(6, 1);
        lcd_putsf("Hadad");
        delay_ms(300);
        lcd_clear();
    }
}
