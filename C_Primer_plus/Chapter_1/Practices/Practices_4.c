#include <stdio.h>

void jolly(void);
void deny(void);

int main(int argc, char const *argv[])
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow\n");
}

void deny(void)
{
	printf("Which nobody can deny\n");
}