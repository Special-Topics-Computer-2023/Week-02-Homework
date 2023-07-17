# การบ้าน สัปดาห์ที่ 02

1. สร้าง idf-project ใหม่
![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/a849d2a6-7414-4742-a5ef-da90d28bee97)

2. สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1
![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/88f3c369-98b0-4783-b47d-8ad5934889ed)
![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/4041c1b3-dfd5-455a-bdeb-21cdd60e9841)

แก้ไขไฟล์ใน .c

![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/c6cfcc42-1bd2-4e61-ba34-13d814a1c3a3)

แก้ไขไฟล์ใน .h

![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/1797a0fb-8ced-4fe3-89f5-af0eff511c6d)

4. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/5da57377-226e-4689-9a75-2004b1305a3f)

5. สร้าง idf-project อีก project ที่ไม่เกี่ยวกับในข้อ 1

![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/b26da0ca-602f-49b7-b9e5-c37d374f83fd)

6. เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml  ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/Nanapon2002/Week-02-Homework/assets/115066356/140f1a39-99c7-4e28-97f6-33fae9f7e17d)

7. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github

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
