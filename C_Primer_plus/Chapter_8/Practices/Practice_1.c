#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch = 0;
	int count = 0;
	printf("begin!\n");
	while((ch = getchar()) != EOF) {
		count++;
	}
	printf("There are %d characters in the file!\n", count);
	return 0;
}