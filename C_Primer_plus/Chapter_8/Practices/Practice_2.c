#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	int count = 0;

	while((ch = getchar()) != EOF) {
		count++;
		if(ch < ' ') {
			if(ch == '\t') {
				printf("\\t:%d ", ch);
			}else if(ch == '\n') {
				printf("\\n:%d ", ch);
			}else {
				printf("^%c:%d ", ch+64, ch);
			}
		}else {
			printf("%c:%d ", ch, ch);
		}
		if(count%10 == 0) {
			printf("\n");
		}
	}

	return 0;
}