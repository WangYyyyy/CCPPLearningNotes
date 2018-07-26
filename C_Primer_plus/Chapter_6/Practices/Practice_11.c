#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nums[8];
	for (int i = 0; i < 8; ++i)
	{
		printf("type No.%d number\n", i);
		scanf("%d", &nums[i]);
	}
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}