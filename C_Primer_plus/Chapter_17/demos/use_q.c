#include <stdio.h>
#include "queue.h"


char * s_gets(char str[], int len);

int main(int argc, char const *argv[]) {
	
	return 0;
}

char * s_gets(char str[], int len) {
	char * ret_val;
	char * find;

	ret_val = fgets(str, len, stdin);
	if(ret_val) {
		find = strchr(str, '\n');
		if (find) {
			*find = '\0';
		}else {
			while (getchar() != '\n')
				continue;
		}
	}
	return ret_val;
}