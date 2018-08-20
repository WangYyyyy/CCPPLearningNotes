#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ct;
	printf("The command line has %d arguments:\n", argc - 1);
	for(ct = 1; ct < argc; ct++)
		printf("%d: %s\n",ct, argv[ct]);
	printf("\n");


	char note[] = "See you at the snack bar.";
	char *ptr;

	ptr = note;
	puts(ptr);
	puts(++ptr);
	note[7] = '\0';
	puts(note);
	puts(++ptr);

	return 0;
}