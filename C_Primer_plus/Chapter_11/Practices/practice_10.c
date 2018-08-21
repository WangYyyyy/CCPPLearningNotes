#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit"

void del_space(char *str);
char * s_gets(char * st, int n);

int main(int argc, char const *argv[])
{
	char s1[SIZE];
	while(1) {
		printf("Type a string(quit to quit):\n");
		s_gets(s1, SIZE);
		if(!strcmp(s1, QUIT))
			break;
		printf("del space:\n");
		del_space(s1);
		puts(s1);
	}
	return 0;
}


void del_space(char *str) {
	while(*str++) {
		if(*str == ' ') {
			for(int i = 0; str[i]; i++) {
				str[i] = str[i + 1];
			}
		}
	}
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