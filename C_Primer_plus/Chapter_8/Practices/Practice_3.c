#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch;
	int count_lower = 0;
	int count_upper = 0;
	while((ch = getchar()) != EOF) {
		if(islower(ch)) {
			count_lower++;
		}else if(isupper(ch)) {
			count_upper++;
		}
	}

	printf("there are %d lower characters and %d upper characters\n",count_lower, count_upper);
	return 0;
}