#include <stdio.h>

int main(int argc, char const *argv[])
{
	int total = 0;
	int days;
	int day = 1;
	printf("Enter how many days you want \n");
	scanf("%d", &days);
	while(day <= days) {
		total += day*day;
		day++;
	}
	printf("the result is %d in %d days\n",total, days);
	return 0;
}