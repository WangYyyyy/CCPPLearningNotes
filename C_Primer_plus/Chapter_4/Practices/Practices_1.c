#include <stdio.h>

int main(int argc, char const *argv[])
{
	char name[20];
	char family_name[20];

	printf("Please type your name and family name:\n");
	scanf("%s %s", name, family_name);
	printf("the result is %s,%s\n", family_name, name);

	return 0;
}