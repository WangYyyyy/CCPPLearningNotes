#include <stdio.h>

int main(int argc, char const *argv[])
{
	float num;
	float num1;
	printf("type 2 numbers to count them\n");
	while(scanf("%f%f", &num, &num1) == 2) {
		printf("(num - num1)/(num * num1) = %f\n", (num - num1)/(num * num1));

		printf("next? q to quit\n");
	}
	return 0;
}