#include <stdio.h>

int main(int argc, char const *argv[])
{
	int friends = 5;
	int week = 1;
	while(friends <= 150) {
		friends -= week;
		friends *= 2;
		week++;
	}
	printf("%d weeks exceed dunbar's number\n",week );
	
	return 0;
}