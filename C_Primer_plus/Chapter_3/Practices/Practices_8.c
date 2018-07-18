#include <stdio.h>

int main(int argc, char const *argv[])
{
	float cup;
	printf("输入杯数:\n");
	scanf("%f", &cup);
	printf("%.0f杯等于%.2f品脱\n", cup, cup/2);
	printf("%.0f杯等于%.2f盎司\n", cup, cup*8);
	printf("%.0f杯等于%.2f汤勺\n", cup, cup*8*2);
	printf("%.0f杯等于%.2f茶勺\n", cup, cup*8*2*3);
	return 0;
}