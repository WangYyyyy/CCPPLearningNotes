#include <stdio.h>

int main(int argc, char const *argv[])
{
	char letters[256];
	int index = -1;
	do {
		index++;
		scanf("%c", &letters[index]);
	}while(letters[index] != '\n');

	for (int i = index - 1; i >= 0; i--) {
		printf("%c", letters[i]);
	}
	return 0;
}