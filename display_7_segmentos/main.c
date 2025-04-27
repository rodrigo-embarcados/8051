#include <8052.h> // Cabeçalho para SDCC

#define uchar unsigned char
#define uint unsigned int

// Correto uso de sbit no SDCC
__sbit __at (0xA4) DIGIT1;  // P2.4 = endereço 0xA4
__sbit __at (0xA5) DIGIT2;  // P2.5 = 0xA5
__sbit __at (0xA6) DIGIT3;  // P2.6 = 0xA6
__sbit __at (0xA7) DIGIT4;  // P2.7 = 0xA7

const uchar SEGMENT_TABLE[38] = 
{
    0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90, // 0-9
    0x88, 0x83, 0xC6, 0xA1, 0x86, 0x8E,                         // A-F
    0xC2, 0x89, 0xF9, 0xF1, 0xC3, 0xA9, 0xC0, 0x8C,             // G-P
    0x98, 0x92, 0x87, 0xC1, 0xE3, 0x8E, 0xFF                    // Q-Z, espaço
};

uchar message[4] = {5, 2, 0, 2}; // Personalize os índices aqui

void delay(uint ms) 
{
    uint i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 120; j++);
}

void disable_all_digits() {
    DIGIT1 = 1;
    DIGIT2 = 1;
    DIGIT3 = 1;
    DIGIT4 = 1;
}

void display() 
{
    disable_all_digits();
    P0 = SEGMENT_TABLE[message[0]];
    DIGIT1 = 0;
    delay(1);

    disable_all_digits();
    P0 = SEGMENT_TABLE[message[1]];
    DIGIT2 = 0;
    delay(1);

    disable_all_digits();
    P0 = SEGMENT_TABLE[message[2]];
    DIGIT3 = 0;
    delay(1);

    disable_all_digits();
    P0 = SEGMENT_TABLE[message[3]];
    DIGIT4 = 0;
    delay(1);
}

void main() 
{
    while (1) 
    {
        display();
    }
}

