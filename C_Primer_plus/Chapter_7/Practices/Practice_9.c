#include <stdio.h>

_Bool isPrime(int num);

int main(int argc, char const *argv[])
{
	int num;
	printf("Please enter a number:\n");
	scanf("%d", &num);

	for(int i = 2; i <= num; i++) {
		if(isPrime(i))
			printf("The prime number less or equal to %d is %d\n",num, i);
	}
	return 0;
}

_Bool isPrime(int num) {
	for(int i = 2; i < num; i++) {
		if(num%i == 0)
			return 0;
	}
	return 1;
}