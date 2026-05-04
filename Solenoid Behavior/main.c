

#include <stdint.h>
#include <stdbool.h>
#include "tm4c123gh6pm.h"
#include "clock.h"
#include "wait.h"
#include "gpio.h"


void initHw()
{
    enablePort(PORTC);
    selectPinPushPullOutput(PORTC, 7);
}


int main(void)
{
    initSystemClockTo40Mhz();
    initHw();

    while (1)
    {
        setPinValue(PORTC, 7,0);
        waitMicrosecond(140000);
        setPinValue(PORTC, 7,1);
        waitMicrosecond(53000);
    }
}
