#include <stdio.h>

#define BASIC_INCOMING 1000.f
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

int main(int argc, char const *argv[])
{
	
	float work_hours = 0;
	float total_incoming = 0;
	float tax = 0;
	float net_incoming = 0;

	printf("type your hours of working:\n");
	scanf("%f", &work_hours);
	if (work_hours > 40) {
		/* code */
		work_hours = work_hours + (work_hours - 40) * 1.5;
	}

	total_incoming = work_hours * BASIC_INCOMING;
	if(total_incoming <= 300) {
		tax = total_incoming * RATE1;
	}else if(total_incoming <= 450) {
		tax = total_incoming * RATE1 + (total_incoming - 300) * RATE2;
	}else {
		tax = total_incoming * RATE1 + (total_incoming - 300) * RATE2 + (total_incoming - 450) * RATE3;
	}
	net_incoming = total_incoming - tax;
	printf("your final incoming is %.2f\n", net_incoming);

	return 0;
}