# การบ้านสัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/4cf212a6-01a8-435d-9513-c87289d282aa)
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/59fb98b2-7eef-4a10-9ed1-c5004ea47b9c)
2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/6b8c5fd9-c26a-4768-bf39-165ec529a735)
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/0d27746a-0ccc-4302-8bd0-5274a82a79c4)
เมื่อสร้างเสร็จจะได้ได้โฟลเดอร์ component
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/4fa28313-7644-4c62-8cb6-3066c9b98b9c)
แก้ไขไฟล์ LED.c ในโฟลเดอร์ components
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/91559a3c-0f6d-45ef-8a1f-05ba2fe0101d)
แก้ไขไฟล์ LED.h ในโฟลเดอร์ components 
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/c0406831-49cc-427c-94b5-ef0125547b87)
3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
สร้าง Repo
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/ba2b90f8-60ba-4438-9870-cbf7e518f9f3)
อัพโปรเจคขึ้น git
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/46635863-9460-4c41-88e7-c6f3f63dcb18)
4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
สร้างโปรเจคใหม่
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/cd24c04d-3436-4000-8a41-a512934644b4)
5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/ad252cfc-db6f-4fcc-81cd-7c454c6fce34)
แก้ข้อมูลภายในไฟล์
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/9e693cfc-2277-4586-a361-ecaaea4e720e)
build และ project
![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/8bc7f743-7b42-4de7-a7d1-42e027001d51)

![image](https://github.com/RatchanonBusaracome/Week-02-Homework/assets/115066405/ccee10ea-b4b0-49cb-b894-9685c36c01de)

```css
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
Repo ข้อ 3. https://github.com/RatchanonBusaracome/IOT_WEEK02

Repo ช้อ 6. https:https://github.com/RatchanonBusaracome/IOT_WEEK2.2

## ตัวอย่างไฟล์ idf_component.yml
https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
