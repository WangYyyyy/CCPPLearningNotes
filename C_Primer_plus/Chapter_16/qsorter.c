#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 40

void fill_array(int ar [], char ar2[], int n);
void show_array(const int ar [], char ar2[], int n);
int myComp(const void * p1, const void * p2);
int myComp2(const void * p1, const void * p2);

int main(int argc, char const *argv[]) {
	
	int vals[NUM];
	char chars[NUM];
	fill_array(vals, chars, NUM);
	show_array(vals, chars, NUM);
	qsort(vals, NUM, sizeof(int), myComp);
	qsort(chars, NUM, sizeof(char), myComp2);
	puts("\nsorted list:");
	show_array(vals, chars, NUM);
	
	return 0;
}

void fill_array(int ar [], char ar2[], int n) {
	for (int i = 0; i < n; ++i)
	{
		ar[i] = rand() % 101;
	}

		for (int i = 0; i < n; ++i)
	{
		ar2[i] = 97 + rand() % (122 - 97 - 1);
	}
}

void show_array(const int ar [], char ar2[], int n) {
	int i = 0;
	for (; i < n; ++i)
	{
		/* code */
		printf("%9d", ar[i]);
		if (i % 6 == 5) 
		{
			/* code */
			putchar('\n');
		}
	}
	if (i % 6 != 0) 
		{
			/* code */
			putchar('\n');
		}


	putchar('\n');
	putchar('\n');

	i = 0;
	for (; i < n; ++i)
	{
		/* code */
		printf("%9c", ar2[i]);
		if (i % 6 == 5) 
		{
			/* code */
			putchar('\n');
		}
	}
	if (i % 6 != 0) 
		{
			/* code */
			putchar('\n');
		}
}

int myComp(const void * p1, const void * p2) {
	const int * a1 = (const int *) p1;
	const int * a2 = (const int *) p2;

	if (*a1 < *a2)
	{
		/* code */
		return -1;
	}else if (*a1 == *a2)
	{
		/* code */
		return 0;
	}else
	{
		return 1;
	}
}

int myComp2(const void * p1, const void * p2) {
	const char * c1 = (const char *) p1;
	const char * c2 = (const char *) p2;

	int res;
	res = strcmp(c1, c2);
	return res;
}