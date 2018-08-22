#include <stdio.h>
#include <string.h>
#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 100

struct book {
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float value;
};


char * s_gets(char * st, int n);
void eatline(void);
void list_by_input(struct book * library, int n);
void list_by_title(struct book * library, int n);
void list_by_price(struct book * library, int n);

int main(int argc, char const *argv[])
{
	int count = 0;
	struct book books[MAX_BOOKS];
	printf("Please enter the book title (empty to quit):\n");
	while(count < MAX_BOOKS && s_gets(books[count].title, MAX_TITLE) && books[count].title[0]) {

		printf("Now type the author\n");
		s_gets(books[count].author, MAX_AUTHOR);
		printf("Now type the value\n");
		scanf("%f", &books[count].value);
		eatline();
		count++;
		if(count < MAX_BOOKS) {
			puts("next title (empty to quit):");
		}
	}
	if(count > 0) {
		list_by_input(books, count);
		list_by_title(books, count);
		list_by_price(books, count);
	}

	return 0;
}

char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		find = strchr(st, '\n');
		if (find) {
			*find = '\0';
		}else {
			while(getchar() != '\n')
				continue;
		}
	}
	return ret_val;
}

void eatline(void) {
	while(getchar() != '\n')
		continue;
}

void list_by_input(struct book * library, int n) {
	puts("list by input:");
	for(int i = 0; i < n; i++) {
		printf("%s by %s: %.2f\n", library[i].title, library[i].author, library[i].value);
	}
	printf("\n");
}

void list_by_title(struct book * library, int n) {
	int i, j;
	struct book temp;
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if (strcmp(library[i].title, library[j].title) > 0) {
				temp = library[i];
				library[i] = library[j];
				library[j] = temp;
			}
		}
	}
	puts("list by title:");
	for(int i = 0; i < n; i++) {
		printf("%s by %s: %.2f\n", library[i].title, library[i].author, library[i].value);
	}
	printf("\n");
}

void list_by_price(struct book * library, int n) {
	int i, j;
	struct book temp;
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if (library[i].value > library[j].value) {
				temp = library[i];
				library[i] = library[j];
				library[j] = temp;
			}
		}
	}
	puts("list by price:");
	for(int i = 0; i < n; i++) {
		printf("%s by %s: %.2f\n", library[i].title, library[i].author, library[i].value);
	}
	printf("\n");
}
