#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film * next;
};

char * s_gets(char str[], int len);

int main(int argc, char const *argv[]) {
	struct film * head = NULL;
	struct film * prev, * current;
	char input[TSIZE];

	puts("Enter first movie title:");
	while(s_gets(input, TSIZE) != NULL
		&& input[0] != '\0') {

		current = (struct film *) malloc(sizeof(struct film));
		if (head == NULL) {//第一个结构
			head = current;
		}else {//后续的结构
			prev->next = current;
		}
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		while(getchar() != '\n')
			continue;
		puts("Enter next movie title or empty line to quit");
		prev = current;
	}

	if (head == NULL) {
		printf("No data!\n");
	}else {
		printf("Here is the moview list:\n");
	}
	current = head;
	while (current) {
		printf("Movie: %s Rating: %d\n", current->title, current->rating);
		current = current->next;
	}

	//释放
	while (head) {
		current = head;
		printf("Free -> %p\n", current);
		head = current->next;
		free(current);
	}

	printf("Bye!\n");


	return 0;
}

char * s_gets(char str[], int len) {
	char * ret_val;
	char * find;

	ret_val = fgets(str, len, stdin);
	if(ret_val) {
		find = strchr(str, '\n');
		if (find) {
			*find = '\0';
		}else {
			while (getchar() != '\n')
				continue;
		}
	}

	return ret_val;
}
