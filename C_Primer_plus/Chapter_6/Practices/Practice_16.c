#include <stdio.h>

int main(int argc, char const *argv[])
{
	float daphne = 100.0;
	float deirdre = 100.0;
	int year = 0;
	do {
		year++;
		daphne += 100.0*0.1;
		deirdre += deirdre*0.05;
	}while(deirdre < daphne);
	printf("%d years later\n", year);
	return 0;
}