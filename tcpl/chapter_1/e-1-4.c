#include<stdio.h>

int main() {
	float fahr , celsius;
	float lower, upper, step;

	lower = -20.0;
	upper = 60.0;
	step = 10;

	celsius = lower;
	printf("Celsius -> Fahrenheit\n");
	while ( celsius <= upper ) {
		fahr = ( 9.0 / 5.0 ) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
