#include <8052.h>  // Cabeçalho para SDCC

void delay_ms(unsigned int ms);

void main() 
{
    unsigned char i;
    
    // Inicializa todos os pinos de P0 para 1 (desligado)
    P0 = 0xFF;  // Configura todos os pinos de P0 para 1 (estado inativo)
    
    while (1) 
    {
        // Aciona os pinos P0.0 até P0.7 um após o outro
        for (i = 0; i < 8; i++) 
        {
            P0 = ~(1 << i);  // Liga o pino atual (P0.0, P0.1, ..., P0.7)
            delay_ms(250);    // Espera por 250ms
        }
    }
}

// Função de atraso simples de aproximadamente 1 milissegundo
void delay_ms(unsigned int ms) 
{
    unsigned int i, j;
    for (i = 0; i < ms; i++) 
        for (j = 0; j < 113; j++);
            // Laço vazio para gerar atraso
}
