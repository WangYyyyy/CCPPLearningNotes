#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch, last_ch;
	int count;
	printf("type:\n");

	while((ch = getchar()) != '#') {
		if(ch == 'i') {
			if(last_ch == 'e') {
				count++;
			}
		}
		last_ch = ch;
	}

	printf("word 'ei' shows %d times\n", count);

	return 0;
}