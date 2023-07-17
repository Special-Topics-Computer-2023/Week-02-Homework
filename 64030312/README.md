# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่่
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/3bc6a7e0-b0ca-46c8-808b-1938b2773018)
 
2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
  ![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/77588ec5-5286-4f23-b461-95d949917ae9)
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/9fe55d88-d2d1-45f3-8d39-561c01c3e3dd)

แก้ไขไฟล์ใน LED.c ใน Components <br>
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/6dbe4edc-dde5-4a2e-aba8-1995a0db9240)

แก้ไขไฟล์ LED.h ใน Components <br>
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/374f0650-e6f9-481e-8e35-0c6119162413)


3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/d3b5e09f-2a4a-41ab-86b9-caca875d4487)
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/1bb7f9f2-ef53-4047-a5de-3f742e44ce6e)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/20205c42-960e-4d86-bf37-24238670abe5)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/2bc2073e-f82d-4c64-900b-5e444c459982)
![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/629435a5-4feb-47c3-818e-fb5881abf31e)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
 ![image](https://github.com/sucha312/Week-02-Homework/assets/115066208/d440f98d-243e-45fc-8379-c277d27eb106)

```c
#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freetos/task.h>
#include "driver/gpio.h"
#include "LED.h"

#define LED_PIN_1 GPIO_NUM_2
#define LED_PIN_2 GPIO_NUM_4
#define LED_PIN_3 GPIO_NUM_5
#define LED_PIN_4 GPIO_NUM_12
#define LED_PIN_5 GPIO_NUM_13
#define LED_PIN_6 GPIO_NUM_14
#define LED_PIN_7 GPIO_NUM_15
#define LED_PIN_8 GPIO_NUM_16

void app_main(void)
{
	LED_init();
    while (1) 
    {
    	LED_toggle(LED_PIN_1);
    	vTaskDelay(1000);
    	
    	LED_toggle(LED_PIN_2);
    	vTaskDelay(1000);
       LED_on(LED_PIN_1);
    }
}

```
## งานที่ต้องส่ง
1. อธิบายการปฏิบัติงานในแต่ละขั้น หรืออาจจะ capture เป็นคลิปแล้ว upload ขึ้น ํYoutube 
2. ส่งงานผ่านการ pull request ใน repo นี้ โดยมีสิ่งที่ต้องส่งคือ  
2.1 คำอธิบายการปฏิบัติงาน และ/หรือ ลิงก์ไปยังคลิปอธิบายการปฏิบัติ  
2.2 link ไปยัง repo ของโปรเจคในข้อ 3 และ 6


## ตัวอย่างไฟล์ idf_component.yml

https://github.com/Special-Topics-Computer-2023/Week-02-Homework/blob/main/example-file-idf_component_yml.md
