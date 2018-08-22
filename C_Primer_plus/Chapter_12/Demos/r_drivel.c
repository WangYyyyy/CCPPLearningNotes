#include <stdio.h>
#include <time.h>

extern unsigned int rand0(void);
extern void srand0(unsigned int seed);

int main(int argc, char const *argv[])
{
	unsigned int seed;
	puts("type seed");

	srand0((unsigned int)time(0));
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", rand0());
	}
	return 0;

	while(scanf("%u", &seed) == 1) {
		srand0(seed);
		for (int i = 0; i < 5; ++i) {
			printf("%d\n", rand0());
		}
		puts("enter next seed q to quit");
	}
	puts("bye!");
	return 0;
}