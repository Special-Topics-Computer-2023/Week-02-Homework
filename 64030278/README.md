1.สร้าง idf-project ใหม่
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/3de2298d-9e17-46fe-84a9-4ca55a0b4a8d)


![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/86c04461-2976-41b0-b39b-145620da8dcc)
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/3c00a444-4cca-4261-b980-84c25fd5d389)

2.สร้าง idf-component ขึ้นใน project ที่สร้างในข้อ 1

![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/cc72e4f2-e5d8-4e5e-99fd-9ae53f4bd9da)

![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/cb1a0a8c-1184-4ba6-b4ef-322012972a37)

3.แก้ไขไฟล์ LED.h ใน component
```css
void ON(pin);
void OFF(pin);
```
4.แก้ไขไฟล์ LED.c ใน component
```css
#include <stdio.h>
#include "LED.h"
#include "driver/gpio.h"
void ON(int pin)
{
    gpio_set_level(pin, 1);
}
void OFF(int pin)
{
    gpio_set_level(pin, 0);
}

```


5.สร้าง Repo
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/c1f8ba79-b307-48fa-8bf8-0b92bf15126e)

6.อัพโปรเจคขึ้น Repo
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/6262f616-85d1-4b4a-a883-118dc8352173)



7.สร้างโปรเจคใหม่

![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/111a4eed-bcb5-4ba4-9209-adfe783c0cfc)


8.เพิ่ม managed component ใน project ในข้อ 4 โดยการเพิ่มไฟล์ idf_component.yml ในโฟลเดอร์ main จากนั้น build และ run project
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/ec180a06-367c-48f0-984c-2c15a6ace60c)
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/e20e236c-3339-4dec-a440-b64f09716df5)

![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/fe25fcea-103f-41ed-b1a5-334cd0bbce9a)


![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/adae027e-8904-4ae7-b869-c1e94198d281)


9.เขียน code เพื่อแสดงการใช้งาน component ที่เพิ่มเข้ามาในข้อ 5 แล้ว push โปรเจคไว้บน github เขียนโค้ดเเพื่อเรียกใช้งาน 
![image](https://github.com/TikPoramat2545/Week-02-Homework/assets/134470274/bfc1a1f7-6701-4edf-b607-7cdcf7e60540)

Repo : (https://github.com/TikPoramat2545/Week02-homework)
Repo : (https://github.com/TikPoramat2545/Week02-homework0.2)https://github.com/TikPoramat2545/Week02-homework0.2

