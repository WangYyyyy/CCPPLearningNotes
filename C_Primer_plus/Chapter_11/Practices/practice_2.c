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
	char ch;
	for (size_t i = 0; i < num; i++) {
		ch = getchar();
		if (ch == ' ') {
			printf("run into the ' ' to stop!\n");
			return;
		}else if(ch == '\n') {
			printf("run into the \\n to stop!\n");
			return;
		}else if(ch == '\t') {
			printf("run into the \\t to stop!\n");
			return;
		}
		string[i] = ch;
	}
}