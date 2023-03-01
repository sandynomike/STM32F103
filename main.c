#include "stm32f103xb.h"
int main( void ){
uint32_t x;
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;	// Enable GPIO Port C
	GPIOC->CRH	 |= GPIO_CRH_MODE13_1;	// Set Mode 1-bit
	GPIOC->CRH	 &= ~GPIO_CRH_CNF13_0;	// Clear CNF 0-bit

	while( 1 )
	{
		GPIOC->ODR ^= GPIO_ODR_ODR13;
		for( x=0; x<5E4; x++)
		{
		}
	}
}

