#include <stdio.h>

int main(int argc, char const *argv[])
{

	char ch;
	int space = 0;
	int enter = 0;
	int others = 0;
	printf("enter letters until # to end\n");
	while((ch = getchar()) != '#') {
		if (ch == ' ') {
			space++;
		}else if (ch == '\n') {
			enter++;
		}else {
			others++;
		}
	}

	printf("spaces  %d, enters  %d, others  %d\n", space, enter, others);

	return 0;
}