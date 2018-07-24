#include <stdio.h>

double calculate_cube(double num);

int main(int argc, char const *argv[])
{
	double num;
	double result;
	printf("Enter a number of double:\n");
	scanf("%lf", &num);
	result = calculate_cube(num);
	printf("the result is %.2lf\n", result);
	return 0;
}

double calculate_cube(double num) {
	return num*num*num;
}