#include <stdio.h>

void rank_three_double(double *num, double *num1, double *num2);
int main(int argc, char const *argv[])
{
	
	double x, y, z;
	printf("type 3 numbers\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	rank_three_double(&x, &y, &z);
	printf("now thry are %lf, %lf and %lf\n",x, y, z);
	return 0;
}

void rank_three_double(double *num, double *num1, double *num2) {
	double tmp;
	if(*num > *num1) {
		tmp = *num;
		*num = *num1;
		*num = tmp;
	}

	if(*num > *num2) {
		tmp = *num;
		*num = *num2;
		*num2 = tmp;
	}

	if(*num1 > *num2) {
		tmp = *num1;
		*num1 = *num2;
		*num2 = tmp;
	}
}