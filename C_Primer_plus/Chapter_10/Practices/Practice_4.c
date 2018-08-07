#include <stdio.h>

int min_of_index(double *arr, int count);

int main(int argc, char const *argv[])
{
	double arr[10] = { 10, 23, 55, 2, 12, 5, 23, 333, 5, 100};
	int result = min_of_index(arr, 10);
	printf("the min number of index is %d\n", result);
	return 0;
}

int min_of_index(double *arr, int count) {
	double temp = *arr;
	int min_index = 0;
	for(int i = 1; i < count; i++) {
		if(temp < *(arr + i)) {
			min_index = i;
		}
	}
	return min_index;
}