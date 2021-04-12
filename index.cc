int num1 = 3;
int num2 = 5;
int myValue = 10;
int i = 1;

void setup ()
{
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, OUTPUT);
}

void loop() 
{
	for (i; i <= myValue; i++) {
          
	if((i %  num1 == 0) && (i % num2 == 0)) {
			digitalWrite(9, LOW);
			digitalWrite(5, LOW);
			digitalWrite(2, LOW);
			digitalWrite(13, HIGH);
			delay(1000);
	}
	else if ((i % num1) == 0){
		digitalWrite(13, LOW);
		digitalWrite(5, LOW);
		digitalWrite(2, LOW);
		digitalWrite(9, HIGH);
		delay(1000);
	}
	else if ((i % num2) == 0) {
		digitalWrite(13, LOW);
		digitalWrite(9, LOW);
		digitalWrite(2, LOW);
		digitalWrite(5, HIGH);
		delay(1000);
	}
	else {
		digitalWrite(13, LOW);
		digitalWrite(9, LOW);
		digitalWrite(2, LOW);
		digitalWrite(5, HIGH);
		delay(1000);
	}
	}

}