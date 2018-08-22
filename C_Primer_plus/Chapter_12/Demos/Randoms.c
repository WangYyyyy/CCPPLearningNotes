#include <stdio.h>

static unsigned long int next = 1;//种子

unsigned int rand0(void);
void srand0(unsigned int seed);

// int main(int argc, char const *argv[])
// {
// 	for (int i = 0; i < 10; ++i) {
// 		int result = rand0();
// 		printf("%d -> %d\n", i, result);
// 	}
// 	return 0;
// }

unsigned int rand0(void) {
	next = next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}

void srand0(unsigned int seed) {
	next = seed;
}

