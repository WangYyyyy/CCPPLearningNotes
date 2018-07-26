#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	char letter;
	printf("Please input an uppercase letter\n");
	scanf("%c", &letter);

	int length = letter - 'A' + 1;
	printf("count = %d\n", length);
	for (int i = 0; i < length; i++)
	{
		char temp = 'A' - 1;
		for (int j = 0; j < (length - i - 1); j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%c", ++temp);
		}
		for (int j = 0; j < i; j++)
		{
			printf("%c", --temp);
		}
		printf("\n");
	}

	return 0;
}