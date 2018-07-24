#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num;
	int maxNum;
	printf("Enter one number of integer:\n");
	printf("Progarm will output numbers bigger than it with 10 times\n");
	scanf("%d", &num);
	maxNum = num + 10;
	while(num <= maxNum) {
		printf("%d ", num++);
	}
	return 0;
}