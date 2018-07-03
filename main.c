#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "M4MemMap.h"
#include <stdint.h>
#include "LED.h"
#include "Alarm.h"

int main(void)
{

    GPIO_Init();
    Alarm_Init();
    Alarm_var = 0x00;
    Alarm_Managing_Function();

    while (1)
    {

    }
    return 0;
}


