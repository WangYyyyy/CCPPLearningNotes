#include <stdio.h>

void larger_of(double *x, double *y);

int main(int argc, char const *argv[])
{
	double x, y;
	printf("type num x:\n");
	scanf("%lf", &x);

	printf("type num y:\n");
	scanf("%lf", &y);

	printf("before x = %lf y = %lf\n", x, y);

	larger_of(&x, &y);

	printf("now x = %lf y = %lf\n", x, y);

	return 0;
}

void larger_of(double *x, double *y) {
	if(*x > *y) {
		*y = *x;
	}else {
		*x = *y;
	}
}