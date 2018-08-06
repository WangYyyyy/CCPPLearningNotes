#include <stdio.h>

void chline(char ch, int i, int j);

int main(int argc, char const *argv[])
{
	
	chline('*', 3, 10);
	return 0;
}

void chline(char ch, int i, int j) {
	for(int k = 0; k < i; k++) {

		for(int l = 0;l < j; l++) {
			putchar(ch);
		}
		printf("\n");
	}
}