#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double * ptd;
	int length;
	int idx = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf("%d", &length) != 1) {
		puts("Number not correctly entered -- bye.");
		exit(-1);
	}

	ptd = (double *) malloc(length * sizeof(double));
	if (ptd == NULL) {
		puts("Memory allocation failed. bye");
		exit(-1);
	}
	puts("Enter the values (q to quit):");
	while(idx < length && scanf("%lf", &ptd[idx]) == 1) {
		++idx;
	}
	printf("Here are your %d enteries.\n", idx);

	free(ptd);

	return 0;
}