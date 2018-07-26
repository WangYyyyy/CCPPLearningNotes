#include <stdio.h>

int main(int argc, char const *argv[])
{
	char letter = 'A';
	for (int i = 0; i < 6; i++) {

		for (int j = 0; j <= i; j++) {
			printf("%c", (int)letter++);
		}
		printf("\n");
	}
	return 0;
}