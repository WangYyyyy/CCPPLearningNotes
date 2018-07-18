#include <stdio.h>

int main(int argc, char const *argv[])
{
	float elementScale = 3e-23;
	float kuatuoScale = 950;
	float kuatuo;
	printf("输入夸脱数:\n");
	scanf("%f", &kuatuo);
	printf("%.0f夸脱数的水 拥有%.0f个分子\n", kuatuo, kuatuo * kuatuoScale / elementScale);
	return 0;
}