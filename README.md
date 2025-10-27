# Smart Street Light using Arduino, LDR & Ultrasonic Sensor 🚦

This project automates street lighting using an **LDR sensor** to detect night/day and an **Ultrasonic sensor** to detect vehicles passing by. The light turns **ON** only at night when a vehicle is nearby, and turns **OFF** otherwise.

---

## 🧠 Features
- Works only during night (using LDR sensor)
- Detects vehicles using Ultrasonic Sensor (HC-SR04)
- Turns LED ON when a vehicle is detected
- Turns OFF automatically after vehicle passes
- Can be expanded for multiple street lights

---

## 🧰 Components Used
- Arduino UNO  
- LDR Module  
- Ultrasonic Sensor (HC-SR04)  
- LED + 220Ω resistor  
- Breadboard and jumper wires  

---

## ⚙️ Circuit Connections

| Component | Arduino Pin |
|------------|-------------|
| LDR OUT | A0 |
| Ultrasonic TRIG | D9 |
| Ultrasonic ECHO | D10 |
| LED | D8 |
| VCC | 5V |
| GND | GND |

---

## 💻 Arduino Code.
[Main Code](https://github.com/AmeySecOps/Smart-Street-Light-Arduino/blob/81b01951b7d2cdd7f92159fc1e57428333bd88b5/CODE/Smart_street_light_project.ino)  


---

## 🧩 How It Works
1. LDR reads light intensity → determines **day/night**.  
2. At night, Ultrasonic Sensor measures distance.  
3. If a vehicle/object is within 30 cm → LED turns ON.  
4. Otherwise → LED remains OFF.  

---

## 🖼️ Circuit Diagram
![circuit Diagream](https://github.com/AmeySecOps/Smart-Street-Light-Arduino/blob/f20dd3b124725c7ab8246309ad89d5539e9b4001/Circuit%20Diagram/Circuit%20Diagram.png)

---

## 🧑‍💻 Author
**Amey Jadhav**  
-It just made for a fun   
