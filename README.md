# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
![image](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/cd019fdb-db1e-4a5c-b0d6-46f30fe2f2f2)


2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![image](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/d1c2cc0b-35f4-4852-afda-95a749241657)


3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
https://github.com/suwithirunrat/Blink-LED.git

![image](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/d06fdc86-3ccf-41ff-8b46-998733734b54)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
![274885376-7b49c0a2-ee3e-483b-b729-224f91f7377a](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/8fbdb5d1-fb89-4e74-b6e1-12690292b1b1)


5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
![274885920-70e3c219-2513-4525-9995-774de7a225b9](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/be64606c-51ab-4b6a-b5f9-3027ab628785)


6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
![274885920-70e3c219-2513-4525-9995-774de7a225b9](https://github.com/suwithirunrat/Week-02-Homework/assets/116150760/579b9eb7-a360-4416-be7c-baef3c405df0)

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
## repo 
ข้อ3 https://github.com/suwithirunrat/Blink-LED.git
ข้อ6 https://github.com/suwithirunrat/IoT-Week2.git

## งานที่ต้องส่ง
1. อธิบายการปฏิบัติงานในแต่ละขั้น หรืออาจจะ capture เป็นคลิปแล้ว upload ขึ้น ํYoutube 
2. ส่งงานผ่านการ pull request ใน repo นี้ โดยมีสิ่งที่ต้องส่งคือ  
2.1 คำอธิบายการปฏิบัติงาน และ/หรือ ลิงก์ไปยังคลิปอธิบายการปฏิบัติ  
2.2 link ไปยัง repo ของโปรเจคในข้อ 3 และ 6


## ตัวอย่างไฟล์ idf_component.yml

https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
