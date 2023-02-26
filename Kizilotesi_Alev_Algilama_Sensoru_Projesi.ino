int sensorPin1 = A0;
int sensorPin2 = A1;
int sensorPin3 = A2;
int sensorPin4 = A3;
int sensorPin5 = A4;
int threshold = 500;
int buzzerPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(sensorPin4, INPUT);
  pinMode(sensorPin5, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int sensorValue1 = analogRead(sensorPin1);
  int sensorValue2 = analogRead(sensorPin2);
  int sensorValue3 = analogRead(sensorPin3);
  int sensorValue4 = analogRead(sensorPin4);
  int sensorValue5 = analogRead(sensorPin5);

  if (sensorValue1 > threshold || sensorValue2 > threshold || sensorValue3 > threshold || sensorValue4 > threshold || sensorValue5 > threshold) {
    Serial.println("Yangın Algılandı!");
    digitalWrite(buzzerPin, HIGH); // Buzzer'ı aktifleştir
    delay(1000); // Buzzer'ı 1 saniye boyunca çalıştır
    digitalWrite(buzzerPin, LOW); // Buzzer'ı devre dışı bırak
  }
  delay(1000);
}
//Bu kodda, beş yönlü alev sensörleri Arduino kartına bağlanır ve bir buzzer kullanarak alarm verilir. Sensörlerin çıkışları, Arduino analog girişleri A2, A3, A4, A5 ve A6 ile okunur. Bu sensörlerden herhang


