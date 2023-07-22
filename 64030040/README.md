# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
  ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/b2d2e9e7-2041-4c00-9c08-091ab780ef51)


2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
 ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/e39fcfb5-e24d-4b42-bb78-a420b0b381e9)
 ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/bf9c978e-46d8-45ea-b7df-9cd554549602)


3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
   ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/bcf23fc3-2774-4570-9692-0a5230905016)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
   ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/72fbbabd-8c58-47c4-85f8-c97d2aafa8fa)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
    ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/e9e741b3-5754-45f0-8731-768c2374e3d6)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
    ![image](https://github.com/CHOTIKA040/Week-02-Homework/assets/109026153/a1192e0e-beb6-4cf0-8d66-32a992def6d5)
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
## โปรเจ็ค
Repo ข้อ 3.https://github.com/CHOTIKA040/IOT_Week2

Repo ข้อ 6.https://github.com/CHOTIKA040/IOT_Week2.2

## งานที่ต้องส่ง
1. อธิบายการปฏิบัติงานในแต่ละขั้น หรืออาจจะ capture เป็นคลิปแล้ว upload ขึ้น ํYoutube 
2. ส่งงานผ่านการ pull request ใน repo นี้ โดยมีสิ่งที่ต้องส่งคือ  
2.1 คำอธิบายการปฏิบัติงาน และ/หรือ ลิงก์ไปยังคลิปอธิบายการปฏิบัติ  
2.2 link ไปยัง repo ของโปรเจคในข้อ 3 และ 6


## ตัวอย่างไฟล์ idf_component.yml

https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
