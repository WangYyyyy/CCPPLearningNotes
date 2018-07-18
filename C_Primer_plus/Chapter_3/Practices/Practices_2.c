#include <stdio.h>
//输入一个ascII码 然后打印字符

int main(int argc, char const *argv[])
{
	int type;
	printf("Please type a number\n");
	scanf("%d", &type);
	printf("you've typed %c\n", type);
	return 0;
}