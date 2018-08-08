#include <stdio.h>

void revert_arr(int arr[], int count);

int main(int argc, char const *argv[])
{

	int arr[8] = {1,2,3,4,5,6,7,8};
	printf("before :\n");
	for(int i = 0; i < 8;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	revert_arr(arr, 8);
	printf("after\n");
	for(int i = 0; i < 8;i++) {
		printf("%d", arr[i]);
	}
	return 0;
}

void revert_arr(int arr[], int count) {
	for(int i = 0; i < count/2; i++) {
		int temp = arr[i];
		arr[i] = arr[count - 1 - i];
		arr[count - 1 - i] = temp;
	}
}