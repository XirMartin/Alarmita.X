#include "mcc_generated_files/mcc.h"


#define     Porton      IO_RC0_PORT
#define     Puerta      IO_RC1_PORT
#define     Baliza      IO_RB7_LAT
#define     Sirena      IO_RC7_LAT



void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        if((Puerta == 1)&&(Porton == 1))
        {
            Sirena = 1;
            __delay_ms(3000);
            Sirena = 0;
        }
        Baliza = Fb;
    }
}

