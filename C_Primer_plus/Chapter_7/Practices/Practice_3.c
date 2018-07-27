#include <stdio.h>

int main(int argc, char const *argv[])
{
	int type_num;
	int even_num = 0, even_sum = 0, odd_num = 0, odd_sum = 0;
	printf("type numbers until 0 to end:\n");
	while(scanf("%d", &type_num)) {
		if(type_num == 0) {
			break;
		}
		if(type_num%2) {
			odd_num++;
			odd_sum+=type_num;
		}else {
			even_num++;
			even_sum+=type_num;
		}
	}

	printf("even numbers are %d, average of even numbers is %f\nodd numbers are %d, average of odd numbers is %f\n", 
		even_num, (float)even_sum/(float)even_num, odd_num, (float)odd_sum/(float)odd_num);
	return 0;
}