#include <stdio.h>

double difference_between_max_and_min(double arr[], int count);

int main(int argc, char const *argv[])
{
	double arr[10] = { 10, 23, 55, 2, 12, 5, 23, 333, 5, 100};
	double result = difference_between_max_and_min(arr, 10);
	printf("the result is %.1lf\n", result);
	return 0;
}

double difference_between_max_and_min(double arr[], int count) {
	double max = arr[0];
	double min = arr[0];

	for(int i = 1; i < count; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	for(int i = 1; i < count; i++) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}

	return max - min;
}
