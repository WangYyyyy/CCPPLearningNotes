#include <stdio.h>

#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define SALARY1 8.75
#define SALARY2 9.33
#define SALARY3 10.00
#define SALARY4 11.20

int main(int argc, char const *argv[])
{
	
	float work_hours = 0;
	float total_incoming = 0;
	float tax = 0;
	int type;
	int stars = 60;
	float basic_incoming;

	do {
		while(stars >= 0) {
			printf("*");
			stars--;
		}
		stars = 60;
		printf("\n");

		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $%.2f/hr\t\t2) $%.2f/hr\n", SALARY1, SALARY2);
		printf("3) $%.2f/hr\t\t4) $%.2f/hr\n", SALARY3, SALARY4);
		printf("5) quit\n");

		while(stars >= 0) {
			printf("*");
			stars--;
		}
		stars = 60;
		printf("\n");

		scanf("%d", &type);
		if(type == 1) {
			basic_incoming = SALARY1;
		}else if(type == 2) {
			basic_incoming = SALARY2;
		}else if(type == 3) {
			basic_incoming = SALARY3;
		}else if(type == 4) {
			basic_incoming = SALARY4;
		}else if(type == 5) {
			printf("bye!\n");
			break;
		}else {
			printf("please type a available number\n");
			continue;
		}

		printf("type your hours of working:\n");
		scanf("%f", &work_hours);
		if (work_hours > 40) {
			/* code */
			work_hours = work_hours + (work_hours - 40) * 1.5;
		}

		total_incoming = work_hours * basic_incoming;
		if(total_incoming <= 300) {
			tax = total_incoming * RATE1;
		}else if(total_incoming <= 450) {
			tax = total_incoming * RATE1 + (total_incoming - 300) * RATE2;
		}else {
			tax = total_incoming * RATE1 + (total_incoming - 300) * RATE2 + (total_incoming - 450) * RATE3;
		}
		total_incoming = total_incoming - tax;
		printf("your final incoming is %.2f\n", total_incoming);

	}while(type != 5);

	return 0;
}