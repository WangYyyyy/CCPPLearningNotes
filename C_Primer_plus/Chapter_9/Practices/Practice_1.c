#include <stdio.h>

double min(double x, double y);

int main(int argc, char const *argv[])
{
	double x, y, result;
	printf("Please type two numbers:\n");
	scanf("%lf %lf", &x, &y);
	result = min(x, y);
	printf("the min number is %lf\n", result);
	return 0;
}

double min(double x, double y) {
	if(x < y) {
		return x;
	}else {
		return y;
	}
}