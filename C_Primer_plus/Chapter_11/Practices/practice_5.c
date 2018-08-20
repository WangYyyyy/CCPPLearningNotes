#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define QUIT "quit"
#define LENGTH 255

char * search_str(char * str, char c);

int main(int argc, char const *argv[])
{
	char string[LENGTH];
	char ch;
	char * target_ch;
	printf("Type a string (type quit ro quit):\n");
	gets(string);
	while (strcmp(string, QUIT)) {
		puts("Type a character:");
		ch = getchar();
		while(getchar() != '\n') {
			continue;
		}
		target_ch = search_str(string, ch);
		if(target_ch != NULL) {
			printf("Find! The string start with the %c: %s\n",ch, target_ch);
		}else {
			printf("cannot find!\n");
		}

		printf("Type a string (type quit ro quit):\n");
		gets(string);
	}
	printf("Bye!\n");
	return 0;
}

char * search_str(char * str, char c) {
	while(*str) {
		if (*str == c) {
			return str;
		}
		str++;
	}
	return NULL;
}