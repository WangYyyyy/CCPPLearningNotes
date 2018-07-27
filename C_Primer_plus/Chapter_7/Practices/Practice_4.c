#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int num = 0, num1 = 0;
	printf("type :\n");
	while((ch = getchar()) != '#') {
		if(ch == '.') {
			putchar('!');
			num++;
		}else if(ch == '!') {
			putchar('!');
			putchar('!');
			num1++;
		}else {
			putchar(ch);	
		}
	}

	printf("replace . to ! %d times\nreplace ! to !! %d times\n", num, num1);
	return 0;
}