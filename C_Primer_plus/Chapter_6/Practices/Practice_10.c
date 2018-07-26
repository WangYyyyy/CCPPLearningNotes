#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, num1;
	printf("Enter lower and upper integer limits:\n");
	scanf("%d %d", &num, &num1);
	while(num1 > num) {
		int num_square = num*num;
		int num1_square = num1*num1;
		int result = 0;
		for (int i = num; i <= num1; i++)
		{
			result += i*i;
		}
		printf("the sums of the squeares from %d to %d is %d\n",num_square, num1_square, result);
		printf("next ?\n");
		scanf("%d %d", &num, &num1);
	}
	printf("Done!\n");

	return 0;
}