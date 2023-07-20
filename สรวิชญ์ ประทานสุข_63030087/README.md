# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/2bb8ca40-427b-470f-80ce-dc555826abf2)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/c1937048-22d2-48e3-967e-b752853d1d40)
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/59487c6d-410c-4466-8882-a1aa7fae16ab)

แก้ไขไฟล์ใน LED.c ใน Components<br>
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/00acf73b-caa8-4cfc-9bba-1f773464adbf)

แก้ไขไฟล์ LED.h ใน Components<br>
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/92faa04c-3d9f-4331-9b78-3c823cbd5760)

4. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/ddd6be1d-1e5f-4625-af9c-f88c5d1059c4)

![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/d986193c-eff5-4736-843b-41b08373c69d)

5. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/9636668d-56ae-46bd-a39b-33fc9f94601e)

6. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/c2aaa0ef-6cc0-4e63-a64b-cff29fc42974)

7. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
![image](https://github.com/Sorrawit087/Week-02-Homework/assets/110808862/7913eacd-1b11-410b-9ad1-32be5fa64fb5)

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
