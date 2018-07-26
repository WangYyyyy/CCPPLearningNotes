#include <stdio.h>

int main(int argc, char const *argv[])
{
	int max, min;
	printf("type the min number\n");
	scanf("%d", &min);
	printf("type the max number\n");
	scanf("%d", &max);

	for (int i = min; i <= max; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	return 0;
}