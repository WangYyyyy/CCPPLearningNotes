#include <stdio.h>

int main(int argc, char const *argv[])
{
	float nums1[8];
	float nums2[8];

	float total = 0.f;
	for (int i = 0; i < 8; ++i)
	{
		printf("Type No.%d num\n", i);
		scanf("%f", &nums1[i]);

		total += nums1[i];
		nums2[i] = total;
	}

	printf("Done!\n");

	for (int i = 0; i < 8; ++i)
	{
		printf("%.2f ", nums1[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; ++i)
	{
		printf("%.2f ", nums2[i]);
	}
	return 0;
}