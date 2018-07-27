#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int num = 0, num1 = 0;
	printf("type :\n");

	while((ch = getchar()) != '#') {

		switch(ch) {
			case '.':
				putchar('!');
				num++;
				break;
			case '!':
				putchar('!');
				putchar('!');
				num1++;
				break;
			default :
				putchar(ch);
				break;
		}
	}

	printf("replace . to ! %d times\nreplace ! to !! %d times\n", num, num1);
	return 0;
}