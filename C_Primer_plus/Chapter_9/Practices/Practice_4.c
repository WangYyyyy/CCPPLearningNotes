#include <stdio.h>

double harmonic_avg(double num, double num1);

int main(int argc, char const *argv[])
{
	double num, num1, result;
	printf("Type the first number:\n");
	scanf("%lf", &num);

	printf("Type the second number:\n");
	scanf("%lf", &num1);

	result = harmonic_avg(num, num1);

	printf("The harmonic average of %lf and %lf is %lf\n", num, num1, result);

	return 0;
}

double harmonic_avg(double num, double num1) {
	double reciprocal = 1.f/num;
	double reciprocal1 = 1.f/num1;
	double avg = (reciprocal + reciprocal1)/2;
	return (1/avg);
}