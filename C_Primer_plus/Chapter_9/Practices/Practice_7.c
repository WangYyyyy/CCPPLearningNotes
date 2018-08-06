#include <stdio.h>
#include <ctype.h>

int check_alpha(char ch);

int main(int argc, char const *argv[])
{
	/* code */
	char ch;
	int result;
	while((ch = getchar()) != EOF) {
		if(ch == '\n') {
			continue;
		}
		result = check_alpha(ch);
		if(result > 0) {
			printf("ch is %c and number is %d\n", ch, result );
		}else {
			printf("%c %d\n",ch, result );
		}

	}
	return 0;
}

int check_alpha(char ch) {
	if(isalpha(ch)) {
		return tolower(ch) - 'a' + 1;
	}else {
		return -1;
	}
}