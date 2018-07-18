#include <stdio.h>

int main(int argc, char const *argv[])
{
	float sec = 3.156e7;
	float age;
	printf("Enter your age:\n");
	scanf("%f", &age);
	printf("Your age of seconds is %.0f second\n", age * sec);
	return 0;
}