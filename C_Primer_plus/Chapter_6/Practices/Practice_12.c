#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	float max;

	printf("Enter the max num\n");
	scanf("%f", &max);
	while(max > 0) {
		float result = 1.0;
		for (float i = 2.0; i <= max; ++i)
		{
			/* code */
			result += (1.0/i);
		}
		printf("the result 1 is %f\n", result);


		float result2 = 1.0;
		for (float i = 2.0; i <= max; ++i)
		{
			/* code */
			// printf("%f\n", result2);
			if ((int)i%2 == 0)
			{
				result2 -= (1.0/i);	
			}else {
				result2 += (1.0/i);	
			}
		}
		printf("the result 2 is %f\n", result2);
		printf("next?\n");
		scanf("%f", &max);
	}
	printf("Done!\n");

	return 0;
}