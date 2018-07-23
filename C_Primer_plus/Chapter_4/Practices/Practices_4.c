#include <stdio.h>

int main(int argc, char const *argv[])
{
	float height;
	char name[40];
	printf("Plz enter your height in inches:\n");
	scanf("%f", &height);
	printf("Plz enter your name:\n");
	scanf("%s", name);
	printf("%s, you are %.3f feet tali\n", name, height/12.0);
	return 0;
}