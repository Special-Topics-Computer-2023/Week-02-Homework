# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/848026a9-7df6-41da-b33e-f9acfd54bb31)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/dd8748aa-0929-4d61-af10-e27ee63459ed)

แก้ไขไฟล์LED.c
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/1550c475-6510-479d-b42e-0191d63d49fe)

แก้ไขไฟล์LED.h
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/5a78818f-0a85-4260-a3fe-1929d94f08e1)

3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/72dfb921-76fb-4f9f-8685-f59924621de7)
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/e9153f4c-4b85-4354-8a5a-ef4e2bec4667)

4. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/3e770d8e-58cb-496a-9d3f-847f6a2371b4)

5. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/755d40ec-581d-4aa6-ab18-089f8cc47608)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
![ภาพ](https://github.com/kammam19/Week-02-Homework/assets/112167732/74d87c44-6f42-4800-8b7b-3431814bab2d)

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
