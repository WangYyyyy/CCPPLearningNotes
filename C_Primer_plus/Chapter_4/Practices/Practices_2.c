#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char name[40];
	printf("Please enter your name:\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("right to 20\n");
	printf("\"%20s\"\n", name);
	printf("left to 20\n");
	printf("\"%-20s\"\n", name);

	printf("\"%*s\"\n", strlen(name) + 3, name);

	return 0;
}