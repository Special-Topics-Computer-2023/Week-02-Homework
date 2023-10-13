# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/46894c8b-e4ab-4cb2-a2fe-40447a2a2569)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/5ab26caf-b8ee-4980-bbf7-aa0e51b0b55c)

แก้ไขไฟล์ LED.c ใน folder components >> LED

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/093e7c00-1f3a-4b6a-9025-176eb5c5123e)

แก้ไขไฟล์ LED.h ใน folder components >> LED >> include

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/3ce37e47-cbda-4f31-b5ad-916a52493247)

3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
Create a new repository
![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/32a3c979-957d-41d7-83e3-03e6bd285fc9)
![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/ba857523-336b-4488-9725-25446b3966e1)


4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
สร้างโปรเจคใหม่

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/7b49c0a2-ee3e-483b-b729-224f91f7377a)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
สร้างไฟล์ idf_component.yml

![Screenshot (17)](https://github.com/Suthera213/Week-02-Homework/assets/115066359/70e3c219-2513-4525-9995-774de7a225b9)

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/7186b6c0-ecbc-4a9e-be46-abda055d5cd5)

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/064f8141-4211-4b1e-9d58-0701e6bb05b5)


6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github

![image](https://github.com/Suthera213/Week-02-Homework/assets/115066359/75092cdb-7a4d-4898-8310-7f7158de3182)

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
## Project
ข้อ3 https://github.com/Suthera213/IOT_WEEK2

ข้อ6 https://github.com/Suthera213/IOT_WEEK2.2

## งานที่ต้องส่ง
1. อธิบายการปฏิบัติงานในแต่ละขั้น หรืออาจจะ capture เป็นคลิปแล้ว upload ขึ้น ํYoutube 
2. ส่งงานผ่านการ pull request ใน repo นี้ โดยมีสิ่งที่ต้องส่งคือ  
2.1 คำอธิบายการปฏิบัติงาน และ/หรือ ลิงก์ไปยังคลิปอธิบายการปฏิบัติ  
2.2 link ไปยัง repo ของโปรเจคในข้อ 3 และ 6


## ตัวอย่างไฟล์ idf_component.yml

https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
