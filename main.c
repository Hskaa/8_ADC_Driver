#include "STD_TYPES.h"

#include "PORT_Interface.h"
#include "DIO_Interface.h"
#include "ADC_Interface.h"



void main (void)
{
	u8 Local_u8ADCReading;
	PORT_voidInit();

	ADC_voidInit();
	while(1)
	{
		Local_u8ADCReading = ADC_u8GetChannelReading(0);
		DIO_u8SetPortValue(DIO_PORTC,Local_u8ADCReading);
	}
}


