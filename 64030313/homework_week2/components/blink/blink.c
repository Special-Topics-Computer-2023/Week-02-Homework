#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"
#include "blink.h"

void blink(int pin)
{
	gpio_set_level(pin, 1);
	usleep(500000);
	gpio_set_level(pin, 0);
	usleep(500000);
}
