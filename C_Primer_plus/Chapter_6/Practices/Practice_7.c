#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	
	char word[40];
	printf("Type a word:\n");
	scanf("%s", word);

	int length = strlen(word);
	for (int i = length; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
	return 0;
}