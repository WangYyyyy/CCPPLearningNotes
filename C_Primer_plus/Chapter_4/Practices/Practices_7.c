#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	float num = 1.0/3.0;
	double num1 = 1.0/3.0;
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	printf("6  float-> %.6f, double-> %.6lf\n", num, num1);
	printf("12 float-> %.12f, double-> %.12lf\n", num, num1);
	printf("16 float-> %.16f, double-> %.16lf\n", num, num1);
	return 0;
}