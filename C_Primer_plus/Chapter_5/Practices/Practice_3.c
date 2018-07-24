#include <stdio.h>

#define DAYS_PER_WEEK 7
int main(int argc, char const *argv[])
{
	int day;
	printf("Enter a day:\n");
	scanf("%d", &day);
	printf("%d days is %d weeks, %d days\n", day, day/DAYS_PER_WEEK, day%DAYS_PER_WEEK);
	return 0;
}