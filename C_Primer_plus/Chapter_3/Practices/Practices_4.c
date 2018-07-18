#include <stdio.h>

int main(int argc, char const *argv[])
{
	float num;
	printf("Enter a floating-point value:\n");
	scanf("%f", &num);
	printf("fixed-point notation: %f\n", num);
	printf("exponental notation: %e\n", num);
	printf("p notation: %a\n", num);
	return 0;
}