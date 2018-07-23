#include <stdio.h>

#define PINT_PER_GALLON 3.785
#define KM_PER_MILE 1.609
int main(int argc, char const *argv[])
{
	
	float mileage;
	float gasline;
	float pint_per_hundred_km;
	float mile_per_gallon;

	printf("Enter your mileage:\n");
	scanf("%f", &mileage);
	printf("Enter your gasline:\n");
	scanf("%f", &gasline);

	printf("L/100Km is %.1f\n", (gasline * PINT_PER_GALLON) / (mileage * KM_PER_MILE) * 100);
	printf("Km/1L is %.1f\n", (mileage * KM_PER_MILE) / (gasline * PINT_PER_GALLON));

	return 0;
}

//输入里程英里和汽油量加仑
//计算升/100公里
//转换英里到公里 *1.609
//转换加仑到升 *3.785
// 升/公里 * 100  100公里多少升
