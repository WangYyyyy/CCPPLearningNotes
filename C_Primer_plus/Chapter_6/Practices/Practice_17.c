#include <stdio.h>

int main(int argc, char const *argv[])
{
	float lucky = 100.0;
	int year = 0;
	do {
		year++;
		lucky += lucky*0.08;
		lucky -= 10;

	}while(lucky > 0);
	printf("%d years later the account to be 0\n", year);
	return 0;
}