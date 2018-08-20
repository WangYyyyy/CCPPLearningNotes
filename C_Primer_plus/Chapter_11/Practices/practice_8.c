#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit"

char * s_gets(char * st, int n);
char * string_in(char * s1, char * s2);

int main(int argc, char const *argv[])
{
	char s1[SIZE];
	char s2[SIZE];
	int num;
	char * str;

	printf("Input the first string (type quit to quit):\n");
	while(strcmp(s_gets(s1, SIZE), QUIT)) {
		printf("Input the second string:\n");
		s_gets(s2, SIZE);
		str = string_in(s1, s2);
		puts(str);
		printf("Input the first string (type quit to quit):\n");
	}
	printf("Bye!\n");
	return 0;
}

char * s_gets(char * st, int n) {
	int i = 0;
	if(fgets(st, n, stdin)) {
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return st;
}

char * string_in(char * s1, char * s2) {
	int i;
	while(*s1) {
		i = 0;
		while(s1[i] == s2[i]) {
			i++;
			if(!s2[i]) {
				return s1;
			}
		}

		s1++;
	}
	return NULL;
}