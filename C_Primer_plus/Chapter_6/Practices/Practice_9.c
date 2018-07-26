#include <stdio.h>

float calculateNum(float num, float num1);

int main(int argc, char const *argv[])
{
	float num;
	float num1;
	printf("type 2 numbers to count them\n");
	while(scanf("%f%f", &num, &num1) == 2) {
		float result = calculateNum(num, num1);
		printf("(num - num1)/(num * num1) = %f\n", result);

		printf("next? q to quit\n");
	}
	return 0;
}

float calculateNum(float num, float num1)
{
	return (num - num1)/(num * num1);
}