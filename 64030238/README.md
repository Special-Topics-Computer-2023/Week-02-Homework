# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/9389a4a8-dd85-473f-a2b1-fdaadc35dab6)
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/331eed8f-9eeb-49a2-bc8a-a4787342c5bf)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/3488c855-163f-4385-b3eb-634c56c095bf)
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/15f66fe5-b314-46c6-8f15-8c26cceaae43)

เมื่อสร้างเสร็จจะได้ได้โฟลเดอร์ component

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/54486e42-e81a-4e55-972b-9bb7ecca7827)

แก้ไขไฟล์ LED.c ในโฟลเดอร์ components

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/d6ea758c-36b3-4638-8ec8-2d314d153a6f)

แก้ไขไฟล์ LED.h ในโฟลเดอร์ components 

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/9a75fb8c-ef61-4a99-8fdf-c7058853fec0)

3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว

สร้าง repo

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/006181a2-297b-4c3e-a4f2-977e8308a6f7)

อัพโปรเจคขึ้น git
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/91b6c23e-c8e1-492d-b178-829f9c3731f5)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1

สร้างโปรเจคใหม่

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/0ce8d16a-ad53-4a59-906c-88e52b449251)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project

สร้างไฟล์ตั้งชื่อไฟล์ idf_component.yml
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/4a250066-07c2-4a0a-bd0a-78bb8897d0e3)
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/172cbb48-eb1c-47f7-b750-3a20d60eedb2)

แก้ข้อมูลภายในไฟล์

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/e5d41e50-568e-44c7-8134-b93291fab71a)

build และ project

![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/57526884-c14d-4ff8-8ae1-a8a81ba324c8)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
เขียนโค้ดเเพื่อเรียกใช้งาน
![image](https://github.com/JASDA0000/Week-02-Homework/assets/103983336/2547bd47-ad95-4ca8-8f76-449bcdeb5c2c)
```c
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "LED.h" //เรียกใช้ component ที่สร้างไว้
#include "driver/gpio.h"

#define pin 23 //ตั้งค่า pin เป็นขาที่ 23

void app_main(void)
{
	gpio_reset_pin(pin); //รีเซ็ต pin
	gpio_set_direction(pin,GPIO_MODE_OUTPUT); //เซ็ต pin เป็น output

	while(1) // ทำ loop โดยตั้งลูปเป็น 1 
	{
    LEDON(pin); //LEDON เปิดไฟ
    sleep(1); //ตั้งหน่วงเวลา 1 วิ
    LEDOFF(pin); //LEDOFF ปิดไฟ
    sleep(1); 
	}
}

```
## งานที่ต้องส่ง
1. อธิบายการปฏิบัติงานในแต่ละขั้น หรืออาจจะ capture เป็นคลิปแล้ว upload ขึ้น ํYoutube 
2. ส่งงานผ่านการ pull request ใน repo นี้ โดยมีสิ่งที่ต้องส่งคือ  
2.1 คำอธิบายการปฏิบัติงาน และ/หรือ ลิงก์ไปยังคลิปอธิบายการปฏิบัติ  
2.2 link ไปยัง repo ของโปรเจคในข้อ 3 และ 6

## โปรเจ็ค
Repo ข้อ 3.https://github.com/JASDA0000/IOT_WEEK2

Repo ช้อ 6.https://github.com/JASDA0000/IOT_WEEK2.2

## ตัวอย่างไฟล์ idf_component.yml
https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
