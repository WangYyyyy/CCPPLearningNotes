#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit"

char * s_gets(char * st, int n);
void reverse(char *st);

int main(int argc, char const *argv[])
{
	
	char s1[SIZE];
	while(1) {
		printf("Type a string:\n");
		s_gets(s1, SIZE);
		printf("reversed:\n");
		if(!strcmp(s1, QUIT))
			break;
		reverse(s1);
		puts(s1);
	}

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

void reverse(char *st) {
	char temp;

	size_t length = strlen(st);
	for(size_t i = 0; i < length/2; i++) {
		temp = st[length - i - 1];
		st[length - i - 1] = st[i];
		st[i] = temp;

	}
	st[length] = '\0';
}