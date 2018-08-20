#include <stdio.h>
#define LENGTH 8

void get_input(char *string, int num);

int main(int argc, char const *argv[])
{
	char string[LENGTH];
	int number = 0;
	get_input(string, LENGTH);
	printf("the result is :\n");
	for (size_t i = 0; i < LENGTH; i++) {
		printf("%c", string[i]);
	}
	return 0;
}

void get_input(char *string, int num) {
	printf("Type enter %d character:\n", num);
	for (size_t i = 0; i < num; i++) {
		string[i] = getchar();
	}
}