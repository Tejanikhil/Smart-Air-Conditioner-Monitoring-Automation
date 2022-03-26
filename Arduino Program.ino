#include<LiquidCrystal.h>
#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 8

LiquidCrystal Lcd(7,6,5,4,3,2);

const int PIRPin = A3;
const int MotorPin = 13;
const int PressurePin = A1;
const int BuzzerPin = 12;
const int GasPin = 9;

int chk = 0;
int DefaultTemperature = 17;
int ReferenceTemperature = 24;
int DefaultRoomTemperature = 27;
int PressureReading = 0;
int BluetoothReading;

void setup() {
  pinMode(MotorPin, OUTPUT);
  pinMode(PIRPin, INPUT);
  pinMode(PressurePin, INPUT);
  pinMode(BuzzerPin, OUTPUT);
  Lcd.begin(16,2);
}

void motorOn() {
  digitalWrite(MotorPin, HIGH);
}

void motorOff() {
  digitalWrite(MotorPin, LOW);
}

void loop() {
  
  chk = DHT11.read(DHT11PIN);
  int PIRRead = digitalRead(PIRPin);
  int Temperature = DHT11.temperature;
  int Humidity = DHT11.humidity;
  int mvReading = analogRead(PressurePin);
  
  if((Temperature>=DefaultRoomTemperature+5) && (PIRRead==1)) {
    motorOn();  
  }
  
  else if(Temperature<ReferenceTemperature) {
    motorOff();
  }
  
  Lcd.print("Temperature:");
  Lcd.println(Temperature);
  Lcd.print("Humidity: ");
  Lcd.println(Humidity);
  delay(50);
  Lcd.clear();
  if((mvReading>377)&&(digitalRead(GasPin)==LOW)) {
      Lcd.print("Good Gas levels");
  }
  
  if((mvReading>147) && (mvReading<=377)&&(digitalRead(GasPin)==LOW)) {
    Lcd.print("Low Gas levels");
  }
  
  if(digitalRead((GasPin)==1) || (mvReading<=147)) {
      Lcd.print("Gas leakage");
      digitalWrite(BuzzerPin, HIGH);
      delay(1000);
  }
  
  digitalWrite(BuzzerPin, LOW);
  delay(100);
  Lcd.clear();
}
