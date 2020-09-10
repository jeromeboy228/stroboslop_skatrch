int Inp = A0;
int Led = 13;
int value = 0;

void setup() {
	pinMode(Led, OUTPUT);
}

void loop() {
	value = analogRead(Inp); // переменная принимает значение с входа А0
	digitalWrite(Led, HIGH); // мигание с промежутками равными значению входа A0
	delay(value);
	digitalWrite(Led, LOW);
	delay(value);

}
