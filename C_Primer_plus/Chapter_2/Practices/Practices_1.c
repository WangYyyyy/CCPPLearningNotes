#include <stdio.h>
#include <float.h>
/*
	检测系统如何处理整数上溢, 浮点数上溢和下溢
*/
int main(int argc, char const *argv[])
{
	int int_max;
	int_max = ~(unsigned int)0/2;
	printf("int_max 正常情况 -> %d\n", int_max);
	printf("int_max 上溢结果 -> %d\n", int_max + 1);

	// printf("%f\n%f\n", FLT_MIN, FLT_MAX);

	printf("FLT_MIN 正常情况-> %e\n", -FLT_MAX);
	printf("FLT_MIN 下溢结果-> %e\n", -FLT_MAX * 100.0f);

	printf("FLT_MAX 正常情况-> %f\n", FLT_MAX);
	printf("FLT_MAX 上溢结果-> %f\n", FLT_MAX * 100.0f);

	return 0;
}