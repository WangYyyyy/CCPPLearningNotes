#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, list[10];

	for (int i = 1; i <= 10; i++)
	{
		list[i] = 2*i + 3;
		for (int j = 1; j <= i; j++)
		{
			printf(" %d\n", list[j]);
		}
		printf("\n");
	}

	return 0;
}