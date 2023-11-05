![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/ffc284c8-80e4-40cc-be53-c0caea892737)1.สร้าง idf-project ใหม่

![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/2249cbf3-87f4-4332-ab23-50a131ec9ac6)
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/0a10e05b-4ab1-4b83-a4dd-4df734fd0c4b)

2.สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1 

![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/1a9f634f-34ac-4e7a-8762-820e6d3e62fe)
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/3b29479f-76c6-4891-8cfc-c1dad3b7f05e)

3.แก้ไขไฟล์ LED.h ใน component
```css
void ON(pin);
void OFF(pin);

```
4.แก้ไขไฟล์ LED.c ใน component
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
5.สร้าง Repo
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/1d7228f1-8e92-42b2-906d-23aae894b815)

6.อัพโปรเจคขึ้น Repo
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/c27a21dc-5cfb-438f-af2a-5386c86dbccd)

7.สร้างโปรเจคใหม่
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/38826a88-ffaf-433e-8c58-0b49756d74f4)

8.เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml ในโฟลเดอร์ main จากนั้น build และ run project
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/8d3acc8c-cfbd-4da1-96cd-36acd456ee93)
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/32b405c8-6cc3-4d7b-8805-c64a26531ffd)
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/d25c0993-bf81-4809-aeb5-3900af6bae5a)
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/336528d2-bb2f-444d-8d1e-68e0b7712804)

9.เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github เขียนโค้ดเเพื่อเรียกใช้งาน 
![ภาพ](https://github.com/Sittinon-Sawatdemongkol/Week-02-Homework/assets/115066278/18afc970-b3a9-405e-b934-ae37801dc975)

Repo : https://github.com/Sittinon-Sawatdemongkol/IOT_Week2

Repo : https://github.com/Sittinon-Sawatdemongkol/IOT_Week2.2



