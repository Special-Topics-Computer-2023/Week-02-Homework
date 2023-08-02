1. สร้าง component LED ในProject1
2. แก้ไฟล์ LED.h ใน component
```css
void ON(pin);
void OFF(pin);
```
3. แก้ไขไฟล์ LED.c ใน component
```css
#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"

void ON(int pin)
{
    gpio_set_level(pin, 1);
}
void OFF(int pin)
{
    gpio_set_level(pin, 0);
}
```
4. แก้ไขไฟล์ CMakeLists.txt
```css
idf_component_register(SRCS "LED.c"
                       INCLUDE_DIRS "include")
```
5. push project1 ขึ้น github
6. สร้าง project2
7. สร้าง ไฟล์ idf_component.yml และแก้ไขดังนี้เพื่อให้สามารถเรียกใช้งาน component จาก github ได้
```css
targets:
  - esp32
description: component example of esp32
dependencies:
  LED_class:
    https://github.com/PiyatidaPh/spc-hw2.git 
    path: components/LED //เลือก path ของ component
```
8. build project เพื่อ clone component ลงมาที่ project
9. แก้ไข code ใน main.c เพื่อเรียกใช้ component

# URL
https://github.com/PiyatidaPh/spc-hw2.git
https://github.com/PiyatidaPh/iot-ep2.git
