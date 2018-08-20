#include <stdio.h>
#include <ctype.h>

#define LENGTH 15

void get_word(char *string);

int main(int argc, char const *argv[])
{
	char string[LENGTH];
	puts("type you word:");
	gets(string);
	get_word(string);
	puts(string);
	return 0;
}

void get_word(char *string) {
	int begin, end;
	for (begin = 0; isspace(*(string+begin)); begin++)
		continue;
	printf("begin is %d\n", begin);
	for (end = begin; !isspace(*(string+end)); end++)
		continue;
	printf("end is %d\n", end);
	*(string + end) = '\0';
	while(*(string + begin)) {
		*string = *(string + begin);
		string++;
		*string = '\0';
	}
}