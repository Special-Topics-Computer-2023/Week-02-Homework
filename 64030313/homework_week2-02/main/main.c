#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <driver/gpio.h>
#include "blink.h"

void app_main(void)
{
	gpio_reset_pin(22);
	gpio_set_direction(22, GPIO_MODE_OUTPUT);
    while (true) {
        blink(22);
    }
}
