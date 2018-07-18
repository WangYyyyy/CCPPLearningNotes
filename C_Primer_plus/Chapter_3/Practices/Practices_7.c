#include <stdio.h>

int main(int argc, char const *argv[])
{
	float inchScale = 2.54;
	float height;
	printf("输入身高(英寸)\n");
	scanf("%f", &height);
	printf("你的身高是%.2f厘米\n", height * inchScale);
	return 0;
}