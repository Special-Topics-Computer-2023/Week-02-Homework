# 64030074 Thani Paknam

1.สร้าง component LED ในโปรเจคที่1

![image](https://github.com/tnpn2545/Week-02-Homework/assets/115066414/019daebc-02a2-40e0-9a60-f1fec793e8b4)

2.แก้ไขไฟล์ LED.h ใน component 

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
5.ใช้คำสั่งใน terminal  เพื่อ push เข้า githup

![image](https://github.com/tnpn2545/Week-02-Homework/assets/115066414/776dc6d5-a126-4246-9b9b-ac8f1b4954aa)

6. สร้าง project 2
7. สร้าง ไฟล์ idf_component.yml และแก้ไขดังนีเพื่อให้สามารถเรียกใช้งาน component จาก github ได้
```css
targets:
  - esp32
description: component example of esp32
dependencies:
  LED_class:
    git: https://github.com/tnpn2545/IOT.git
    path: components/LED

```
8. build project เพื่อ clone component ลงมาที่ project ของเรา
9. แก้ไข code ใน main.c เพื่อเรียกใช้ component

    # URL

1. project ที่1 = https://github.com/tnpn2545/IOT
2. project ที่2 = https://github.com/tnpn2545/IOT2
