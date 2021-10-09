#include "devcfg.h"
#include <xc.h>

void init(void);
void uart_init(void);
void spi_init(void);
void lora_init(void);

int main(void)
{
    init();
    
    while(1)
    {
        
    }
}

void init(void)
{
    uart_init();
    spi_init();
    lora_init();
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