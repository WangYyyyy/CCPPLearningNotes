#include <stdio.h>

int main(int argc, char const *argv[])
{
	char alphabet[26];
	char letter = 'a';
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = letter;
		letter++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%c ", alphabet[i]);
	}
	return 0;
}