int Inp = A0;
int Led = 13;
int value = 0;

void setup() {
	pinMode(Led, OUTPUT);
}

void loop() {
	value = analogRead(Inp); // ���������� ��������� �������� � ����� �0
	digitalWrite(Led, HIGH); // ������� � ������������ ������� �������� ����� A0
	delay(value);
	digitalWrite(Led, LOW);
	delay(value);

}
