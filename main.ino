#include <Servo.h>

#define LEDPIN   D1
#define PIEZOPIN D8
#define SERVOPIN D5

Servo myservo;

void setup() {
  Serial.begin(115200);

  // -------- Servo --------
  myservo.attach(SERVOPIN);
  myservo.write(0);   // locked start

  // -------- 4-way DIP (password) --------
  pinMode(D6, INPUT_PULLUP);
  pinMode(D7, INPUT_PULLUP);
  pinMode(D0, INPUT_PULLUP);
  pinMode(A0, INPUT_PULLUP);

  // -------- 2-way DIP --------
  pinMode(D3, INPUT_PULLUP);
  pinMode(D4, INPUT_PULLUP);

  // -------- outputs --------
  pinMode(LEDPIN, OUTPUT);
  digitalWrite(LEDPIN, LOW);
  noTone(PIEZOPIN);

  Serial.println("System Ready");
}

void loop() {

  // ===== Read Password Switches =====
  int b1 = !digitalRead(D6);
  int b2 = !digitalRead(D7);
  int b3 = !digitalRead(D0);
  int b4 = !digitalRead(A0);

  Serial.print("PASS = ");
  Serial.print(b1);
  Serial.print(b2);
  Serial.print(b3);
  Serial.println(b4);

  // ===== Password Check = 1101 =====
  if (b1==1 && b2==1 && b3==0 && b4==1) {
    myservo.write(180);
    Serial.println("UNLOCKED");
  } else {
    myservo.write(0);
    Serial.println("LOCKED");
  }

  // ===== 2-way DIP Controls =====
  bool light_on  = !digitalRead(D3);
  bool buzzer_on = !digitalRead(D4);

  digitalWrite(LEDPIN, light_on ? HIGH : LOW);

  if (buzzer_on) tone(PIEZOPIN, 2000);
  else noTone(PIEZOPIN);

  Serial.print("LED=");
  Serial.print(light_on);
  Serial.print(" BUZZ=");
  Serial.println(buzzer_on);

  Serial.println("------");

  delay(700);
}