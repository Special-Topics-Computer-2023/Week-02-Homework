# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/e1c09914-77ef-4d02-91e7-90f1d8a6c0f8)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/c7d465d8-c628-4fa3-8f7a-4653df56cfa9)
![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/46428b28-848e-4ce7-bb6c-b103764c9f17)

เมื่อสร้างเสร็จจะได้รับโฟลเดอร์ component และทำการแก้ไข้ไฟล์ LED.c ในโฟลเดอร์ component

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/0c9e63bf-332b-4ed4-ace2-ba23a203fa11)

แก้ไขไฟล์ LED.h ในโฟลเดอร์ component

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/c036504b-2adf-44c1-8c06-5a6d73a59239)

3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/3eb2f273-ec35-48d0-8950-df243dc85db2)

ทำการอัพโปรเจคขึ้น git

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/016a32d1-5231-48df-a19c-4c0d237a092b)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1

ทำการสร้างโปรเจคใหม่

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/f1949d7c-ada0-482a-8410-98669899521d)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/00add174-af9a-4ef7-98f1-17b7cbc89279)

แก้ไขข้อมูลภายในไฟล์
![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/da52c4a4-5baa-497c-abfa-c973bab6a5b7)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github

![image](https://github.com/KUNTIDA234/Week-02-Homework/assets/115066215/f65a0920-0d71-4b02-b589-33be433d8152)


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

## Project
Repo ข้อ 3
https://github.com/KUNTIDA234/IOT_Week2

Repo ข้อ 6
https://github.com/KUNTIDA234/IOT_Week2.2
## ตัวอย่างไฟล์ idf_component.yml
https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
