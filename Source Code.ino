// Motor pins
#define IN1 3
#define IN2 4
#define IN3 9
#define IN4 10
#define ENA 2
#define ENB 11

// LED pins
#define WHITE_LED 13
#define RED_LED 12

char cmd;
int speedMotor = 200;

void setup() {
  Serial.begin(9600);

  // Motor pins
  pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT); pinMode(ENB, OUTPUT);

  // LEDs
  pinMode(WHITE_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  stopMotors();
}

void loop() {
  if (Serial.available()) {
    cmd = Serial.read();

    switch (cmd) {
      case 'F': forward(); break;
      case 'B': backward(); break;
      case 'L': left(); break;
      case 'R': right(); break;
      case 'S': stopMotors(); break;

      case '1': speedMotor = 100; break;
      case '2': speedMotor = 150; break;
      case '3': speedMotor = 200; break;
      case '4': speedMotor = 255; break;

      case 'Y': digitalWrite(WHITE_LED, HIGH); break;
      case 'y': digitalWrite(WHITE_LED, LOW); break;

      case 'Z': digitalWrite(RED_LED,HIGH); break;
      case 'z': digitalWrite(RED_LED, LOW); break;
    }
  }
}

// Movement functions
void forward() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);
}

void backward() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);
}

void left() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);
}

void right() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
  analogWrite(ENA, speedMotor);
  analogWrite(ENB, speedMotor);
}

void stopMotors() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
  analogWrite(ENA, 0); analogWrite(ENB, 0);
}
