#include "devcfg.h"
#include <xc.h>

void init(void);
void uart_init(void);
void spi_init(void);
void lora_init(void);

void heartbeat(void);

int main(void)
{
    init();
    
    while(1)
    {
        heartbeat();
    
        // wait
        for (int i = 0; i < 10000; i++);
    }
}

void init(void)
{
    uart_init();
    spi_init();
    lora_init();
    
    // set port RA3 to output 
    TRISA &= ~_TRISA_TRISA4_MASK;
}

void uart_init(void)
{
    
}

void spi_init(void)
{
    
}

void lora_init(void)
{
    
}

void heartbeat(void)
{
    
    // turn on 
    PORTA |= _PORTA_RA4_MASK;
    
    // wait
    for (int i = 0; i < 10000; i++);
    
    // turn off
    PORTA &= ~_PORTA_RA4_MASK;
   
}