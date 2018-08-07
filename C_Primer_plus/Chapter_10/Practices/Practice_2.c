#include <stdio.h>

#define COUNT 5
void copy_arr(double target[], double source[], int count);
void copy_ptr(double *target, double *source, int count);
void copy_ptrs(double *target, double *source_begin, double *source_end);

int main(int argc, char const *argv[])
{
	
	double source[COUNT] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target[COUNT];
	double target1[COUNT];
	double target2[COUNT];

	copy_arr(target, source, COUNT);
	copy_ptr(target1, source, COUNT);
	copy_ptrs(target2, source, source + 5);

	for(int i = 0; i < COUNT; i++) {
		printf("%.1lf , %.1lf , %.1lf\n",target[i], target1[i], target2[i]);
	}

	return 0;
}

void copy_arr(double target[], double source[], int count) {
	for(int i = 0; i < count; i++) {
		target[i] = source[i];
	}
}

void copy_ptr(double *target, double *source, int count) {
	for(int i = 0; i < count; i++) {
		*(target + i) = *(source + i);
	}
}

void copy_ptrs(double *target, double *source_begin, double *source_end) {
	while(source_begin < source_end) {
		*target++ = *source_begin++;
	}
}