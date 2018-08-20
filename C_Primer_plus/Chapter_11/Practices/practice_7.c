#include <stdio.h>
#include <string.h>
#define QUIT "quit"
#define SIZE 40

char * my_strncpy(char * p1, char * p2, int n);

int main(int argc, char const *argv[])
{
	char s1[SIZE];
	char s2[SIZE];
	int num;
	char * str;

	printf("Input the first string (type quit to quit):\n");
	while(strcmp(gets(s1), QUIT)) {
		printf("Input the second string:\n");
		gets(s2);
		printf("Input the number of char copied from s2: ");
		scanf("%d", &num);
		getchar();
		if (strlen(s2) >= num)
			s1[strlen(s1) + num] = '\0';
		str = my_strncpy(s1, s2, num);
		puts(str);
		printf("Input the first string (type quit to quit):\n");
	}
	printf("Bye!\n");


	return 0;
}


char * my_strncpy(char * p1, char * p2, int n) {
	int i = 1;
	char * p = p1;

	while(*p1++)
		continue;

	*--p1 = *p2;
	while(i < n && *p2) {
		*++p1 = *++p2;
		i++;
	}

	return p;
}