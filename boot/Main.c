#include "stdint.h"
#include "HalUart.h"

#include "stdio.h"

static void Hw_init(void);
static void Printf_test(void);

void main(void)
{
	uint32_t* dummyAddr = (uint32_t*)(1024*1024*100);
	*dummyAddr = sizeof(long);
	Hw_init();

	uint32_t i = 100;
	while(i--)
	{
		Hal_uart_put_char('N');
	}
	Hal_uart_put_char('\n');

	putstr("Hello World!\n");
	
	Printf_test();

	while(true);
}

static void Hw_init(void)
{
	Hal_uart_init();
}

static void Printf_test(void)
{
        char* str = "printf pointer test";
        char* nullptr = 0;
        uint32_t i = 5;
        
        debug_printf("%s\n", "Hello printf");
        debug_printf("output string pointer: %s\n",str);
        debug_printf("%s is null pointer, %u number\n",nullptr, 10);
        debug_printf("%u = 5\n", i);
        debug_printf("dec=%u hex=%x\n", 0xff, 0xff);
        debug_printf("print zero %u\n", 0);
}
