#include <stdio.h>
#include <string.h>
#define QUIT "quit"
#define LENGTH 255

int is_within(char * str, char c);

int main(int argc, char const *argv[])
{
	char string[LENGTH];
	char ch;
	int result;
	printf("Type a string (type quit ro quit):\n");
	gets(string);
	while (strcmp(string, QUIT)) {
		puts("Type a character:");
		ch = getchar();
		while(getchar() != '\n') {
			continue;
		}
		result = is_within(string, ch);
		if(result) {
			printf("Find!");
		}else {
			printf("cannot find!\n");
		}

		printf("Type a string (type quit ro quit):\n");
		gets(string);
	}
	printf("Bye!\n");
	return 0;
}

int is_within(char * str, char c) {
	while(*str) {
		if (*str == c) {
			return 1;
		}
		str++;
	}
	return 0;
}