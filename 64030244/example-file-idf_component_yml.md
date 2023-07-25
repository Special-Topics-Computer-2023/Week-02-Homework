# ตัวอย่างไฟล์ idf_component.yml

## กรณี component มีลักษณะเป็น repo หลัก
``` yml
targets:
  - esp32
description: component example of esp32
dependencies:
  LED_class:
    git: https://github.com/Special-Topics-Computer-2023/LED_class
```

## กรณี component มีอยู่ใน project อื่น repo หลัก
``` yml
targets:
  - esp32
description: component example of esp32
dependencies:
  LED_class:
    git: https://github.com/Special-Topics-Computer-2023/KMF-LED-Component
    path: components/LED
```


## ศึกษาเพิ่มเติม

### [Manifest File idf_component.yml Format Reference](https://docs.espressif.com/projects/idf-component-manager/en/latest/reference/manifest_file.html)