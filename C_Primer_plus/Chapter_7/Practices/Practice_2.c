#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int count = 0;
	printf("type letters:\n");
	while((ch = getchar()) != '#') {

		printf("%d ", ch);
		count++;
		if (count%8 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}