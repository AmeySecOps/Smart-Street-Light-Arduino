// Smart Street Light with LDR + Ultrasonic Sensor
// by Amey Jadhav

#define TRIG 9
#define ECHO 10
#define LED 8
#define LDR A0

long duration;
int distance;
int ldrValue;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read LDR sensor (light intensity)
  ldrValue = analogRead(LDR);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Set a threshold (adjust as needed)
  int lightThreshold = 500;  // <500 = night, >500 = day

  if (ldrValue > lightThreshold) {
    // It's night — activate ultrasonic sensor
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    duration = pulseIn(ECHO, HIGH);
    distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.println(distance);

    // Object detected within 30 cm
    if (distance < 30) {
      digitalWrite(LED, HIGH);
      Serial.println("Vehicle detected → Light ON");
    } else {
      digitalWrite(LED, LOW);
      Serial.println("No vehicle → Light OFF");
    }

  } else {
    // It's daytime → Light always off
    digitalWrite(LED, LOW);
    Serial.println("Daytime → Light OFF");
  }

  delay(500);
}
