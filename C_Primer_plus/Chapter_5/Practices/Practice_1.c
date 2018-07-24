#include <stdio.h>

#define SCALE_TIME 60
int main(int argc, char const *argv[])
{
	float minute, hour, second;
	
	printf("Please enter one minute(type 0 to end the program):\n");
	while(minute > 0) {

		scanf("%f", &minute);
		printf("%.0f minutes is %.2f hour and %.0f second\n",minute, minute/SCALE_TIME, minute*SCALE_TIME );
		printf("next type?\n");
	}
	return 0;
}