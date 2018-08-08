#include <stdio.h>

void copy_ptr(double *target, double *source, int count);

int main(int argc, char const *argv[])
{
	double arr[7] = {0.0,1.0,2.0,3.0,4.0,5.0,6.0};
	double arr_2[3];
	copy_ptr(arr_2, arr + 2, 3);
	for(int i = 0; i < 3; i++) {
		printf("%.1lf\n", arr_2[i]);
	}
	return 0;
}

void copy_ptr(double *target, double *source, int count) {
	for(int i = 0; i < count; i++) {
		*(target + i) = *(source + i);
	}
}