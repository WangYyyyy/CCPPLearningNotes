#include <stdio.h>

int max_of(int *arr, int count);

int main(int argc, char const *argv[])
{
	int arr[10] = { 10, 23, 55, 2, 12, 5, 23, 333, 5, 100};
	int result = max_of(arr, 10);
	printf("the max number is %d\n", result);
	return 0;
}

int max_of(int *arr, int count) {
	int temp = arr[0];
	for(int i = 1; i < count; i++) {
		if(temp < arr[i]) {
			temp = arr[i];
		}
	}

	return temp;
}