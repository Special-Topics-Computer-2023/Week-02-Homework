# 64030012

1. สร้าง project ใน vs code
2. สร้าง components LED ใน project

![Screenshot 2566-07-16 at 23 05 32](https://github.com/Fixckpx/Week-02-Homework/assets/115066186/2dc24b9f-a278-4e1e-823a-7f8e41d864a9)

3. แก้ไข code ใน LED.h

```css
void LEDON(gpio_pin);
void LEDOFF(gpio_pin);
```
4. แก้ไข code ใน LED.c
```css
#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"

void LEDON(int gpio_pin)
{
    gpio_set_level(gpio_pin, 1);
}
void LEDOFF(int gpio_pin)
{
    gpio_set_level(gpio_pin, 0);
}
```
5. upload projecะ
6. สร้าง project ใหม่
7. แก้ไข idf_component.yml
```css
targets:
  - esp32
description: component example of esp32
dependencies:
  LED_class:
    git: https://github.com/Fixckpx/iowW2.git
    path: components/LED

```
8. build project
9. แก้ไข code ใน main.c
```css
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h" // เพื่อการใช้งาน digital output (GPIO)
#include "LED.h"

#define gpio 22
int gpio_pin = pin;

void app_main(void)
{
    gpio_reset_pin(gpio);                       // รีเซ็ตสถานะของขาหมายเลข 22
    gpio_set_direction(gpio, GPIO_MODE_OUTPUT); // กำหนดให้ขาหมายเลข 22 เป็น digital output

    while (true) // while (true) = วนรอบไม่มีที่สิ้นสุด
    {
        LEDON(gpio_pin);
        sleep(1); // หน่วงเวลา 1 วินาที
        LEDOFF(gpio_pin);
        sleep(1); // หน่วงเวลา 1 วินาที
    }
}
```
10. run project
project 1 https://github.com/Fixckpx/iowW2.git
project 2 https://github.com/Fixckpx/iowCom.git
