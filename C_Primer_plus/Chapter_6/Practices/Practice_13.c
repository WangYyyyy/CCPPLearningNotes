#include <stdio.h>

int pow_2(int count);

int main(int argc, char const *argv[])
{
	int nums[8];
	for (int i = 1; i <= 8; i++)
	{
		nums[i - 1] = pow_2(i);
	}

	int i = 0;
	do {
		printf("%d\n",nums[i] );
		i++;
	}while(i < 8);
	return 0;
}

int pow_2(int count) {
	int result = 2;
	for (int i = 0; i < count; ++i)
	{
		result *= 2;
	}
	return result;
}