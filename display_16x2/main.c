#include <8052.h>

#define LCD P0  // Dados no P0.0–P0.7

__sbit __at (0xB5) RS;  // P3.5
__sbit __at (0xB6) RW;  // P3.6
__sbit __at (0xB4) EN;  // P3.4  <-- CORRIGIDO!

void delay(unsigned int ms) 
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 200; j++);
}

void lcd_pulse(void) 
{
    EN = 1;
    delay(1);
    EN = 0;
    delay(1);
}

void lcd_cmd(unsigned char cmd) 
{
    RS = 0;
    RW = 0;
    LCD = cmd;
    lcd_pulse();
    delay(2);
}

void lcd_data(unsigned char data) 
{
    RS = 1;
    RW = 0;
    LCD = data;
    lcd_pulse();
    delay(2);
}

void lcd_init(void) 
{
    delay(40);  // Aguarda após energização

    lcd_cmd(0x38); // Modo 8 bits, 2 linhas, 5x8
    lcd_cmd(0x0C); // Display ON, cursor OFF
    lcd_cmd(0x06); // Cursor avança
    lcd_cmd(0x01); // Limpa tela
    delay(2);
}

void lcd_gotoxy(unsigned char col, unsigned char row) 
{
    lcd_cmd((row == 0 ? 0x80 : 0xC0) + col);
}

void lcd_puts(const char *str) 
{
    while (*str)
        lcd_data(*str++);
}

void main(void) 
{
    lcd_init();

    lcd_gotoxy(0, 0);
    lcd_puts("8051 FUNCIONA!");

    lcd_gotoxy(0, 1);
    lcd_puts("LCD OK no P0 :)");

    while (1);
}
