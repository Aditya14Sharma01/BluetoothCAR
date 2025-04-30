# BluetoothCAR
# 🚗 Bluetooth Controlled Arduino Car Project

This is a DIY Bluetooth-controlled car built using an **Arduino Uno**, **HC-05 Bluetooth module**, and **L298N motor driver module**. The car is wirelessly controlled via a smartphone Android app and is perfect for beginners in robotics and embedded systems.

---

## 🔧 Features

- Wireless Bluetooth control using HC-05
- Motor control via L298N H-Bridge
- Forward, backward, left, right, stop commands
- Compatible with Android smartphone apps
- Modular and expandable for future upgrades

---

## 📦 Components Used

| Component               | Quantity |
|------------------------|----------|
| Arduino Uno R3         | 1        |
| HC-05 Bluetooth Module | 1        |
| L298N Motor Driver     | 1        |
| DC Gear Motors         | 2 or 4   |
| Car Chassis (2WD/4WD)  | 1        |
| Wheels                 | 2 or 4   |
| Battery (6V–12V)       | 1        |
| Jumper Wires           | -        |
| Smartphone (Android)   | 1        |

---

## 🔌 Wiring Diagram

Add a labeled image like this in the `images/` folder:




📎 Place image here: `images/circuit_diagram.png`

---

## 💻 Arduino Code

The Arduino sketch is located in the `car_code/` folder:
- File: `bluetooth_car.ino`

It listens to characters sent via Bluetooth and drives the motors accordingly.

**Sample Commands:**
- `F` → Forward
- `B` → Backward
- `L` → Left
- `R` → Right
- `S` → Stop

---

## 📱 Android App Control

You can use any Bluetooth controller app that can send characters, such as:
- [Bluetooth Electronics](https://play.google.com/store/apps/details?id=com.keuwl.arduinobluetoothcontroller)
- [Arduino Bluetooth Controller](https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCController)

Or, build your own using:
- MIT App Inventor ([https://appinventor.mit.edu](https://appinventor.mit.edu))

📎 You can include your `.apk` or `.aia` file in the `/app/` folder.

---

## 🚀 How to Run

1. Upload `bluetooth_car.ino` to the Arduino Uno using the Arduino IDE.
2. Power the car with a battery pack (avoid USB during motor operation).
3. Pair HC-05 with your phone (`Default password: 1234` or `0000`).
4. Open your Bluetooth controller app and connect.
5. Use buttons to send `F`, `B`, `L`, `R`, `S` commands to move the car.

---

## 📸 Demo Images

Add your car photos here:



![Car](images/car_front.jpg)

---

## 🛠️ Future Improvements (Optional)

You can upgrade this car with:
- Ultrasonic sensor for obstacle avoidance
- Line-following IR sensors
- Voice control via Android app
- IoT control using WiFi (ESP8266)
- Camera module for FPV
- GPS module for navigation

---

## 👨‍💻 Author & Credits

- **Your Name** – [GitHub Profile](https://github.com/yourusername)
- Inspired by various online tutorials and Arduino projects
- Feel free to fork or modify this project!

---

## 📄 License

This project is open-source under the [MIT License](LICENSE).
