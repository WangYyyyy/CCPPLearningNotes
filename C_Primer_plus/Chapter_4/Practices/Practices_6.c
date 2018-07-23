#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char name[40];
	char family_name[40];
	printf("Plz enter your name:\n");
	scanf("%s", name);
	printf("Enter your family name\n");
	scanf("%s", family_name);
	printf("%s %s\n", name, family_name);
	printf("%*d %*d\n", strlen(name), strlen(name), strlen(family_name), strlen(family_name));

	printf("%s %s\n", name, family_name);
	printf("%*d %*d\n", -strlen(name), strlen(name), -strlen(family_name), strlen(family_name));
	return 0;
}