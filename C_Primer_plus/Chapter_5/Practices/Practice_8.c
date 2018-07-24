#include <stdio.h>

int main(int argc, char const *argv[])
{
	int second_num;
	int first_num;
	printf("this program computes moduil\n");
	printf("Enter an integer to serve as the second opearand: \n");
	scanf("%d", &second_num);
	printf("Now enter the first opearand:\n");
	scanf("%d", &first_num);
	while(first_num > 0) {
		printf("%d %% %d is %d\n", first_num, second_num, first_num%second_num);
		printf("Now enter next ? 0 to quit\n");
		scanf("%d", &first_num);
	}
	printf("Bye!\n");
	return 0;
}