#include <stdio.h>


int main(int argc, char const *argv[])
{
	const float CM_PER_INCH = 2.54f;
	const float CM_PER_FEET = 30.38f;
	float height;
	float height_inch = 0.0;
	printf("Enter you height on cm\n");
	scanf("%f", &height);
	while(height > 0) {
		height_inch = (height - CM_PER_FEET * (int)(height/CM_PER_FEET)) / CM_PER_INCH;
		printf("%.1f cm = %d feet, %.1f inches\n", height, (int)(height/CM_PER_FEET), height_inch);
		printf("next?\n");
		scanf("%f", &height);
	}
	printf("Bye!\n");


	return 0;
}