#include <stdio.h>

void temperatures(double temperature);
int main(int argc, char const *argv[])
{
	double temperature;
	printf("please enter the temperature (q to quit):");
	while(scanf("%lf", &temperature) == 1) {
		temperatures(temperature);
		printf("next? (q to quit)\n");
	}
	return 0;
}

void temperatures(double temperature) {
	const double celsius = 5.0/9.0*(temperature - 32.0);
	const double kelvin_scale = 273.16;
	const double kelvin = temperature + kelvin_scale;
	printf("Celsius: %.2lf  Fahrenheit:%.2lf  Kelvin:%.2lf\n", celsius, temperature, kelvin);
}