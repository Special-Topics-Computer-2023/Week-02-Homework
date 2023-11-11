
## 1. สร้าง idf-project ใหม่
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/45b6e6ba-6afc-4c1a-8e5b-95b769ed2951)

## 2. สร้าง idf-components ขั้นใน project ที่สร้างในข้อ 1
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/65a3a749-67d6-4670-b9e3-11dd0709cf97)

## 3. ทำการ Push project พร้อม component ขึ้นไปที่ remote repository ใน account github ส่วนตัว
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/5b5afb85-00a9-4734-bdee-a1f4aff66367)
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/d4dd441d-a42a-4abb-bed5-33152b5c1bd4)

## 4. สร้าง idf-proejct อีก project ที่ไม่เกี่ยวกับในข้อ 1
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/3b4e9e32-2033-4118-bf5c-2c05ce4c3295)

## 5. เพิ่ม managed component ใน project ในข้อ 4 โดยผ่านการเพิ่มไฟล์ idf_component.yml ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/38b0d14a-57d6-45e2-a109-380957dacecd)
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/4349237b-44b8-466a-8285-79c034cc3417)

## Build Project
![image](https://github.com/64030301nam/Week-02-Homework/assets/115066329/723dd7ce-1be1-4fd1-ae82-d2d21d9ea51f)

6. เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github
```c
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <driver/gpio.h>
#include "blink.h"

void app_main(void)
{
	gpio_reset_pin(22);
	gpio_set_direction(22, GPIO_MODE_OUTPUT);
    while (true) {
        blink(22);
    }
}
```

## idf project
- https://github.com/64030301nam/project-week2
- https://github.com/64030301nam/project-week2-2
