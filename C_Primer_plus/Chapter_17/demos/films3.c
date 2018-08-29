#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void showmovies(Item * item);
char * s_gets(char str[], int len);

int main(int argc, char const *argv[]) {
	
	List movies;
	Item temp;

	InitializeList(&movies);

	if (ListIsFull(&movies)) {
		fprintf(stderr, "%s\n", "No memory available! Bye!");
		exit(1);
	}

	puts("Enter first movie title:");
	while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
		puts("Enter your rating <0-10>:");
		scanf("%d", &temp.rating);
		while(getchar() != '\n')
			continue;
		if (!AddItem(temp, &movies)) {
			fprintf(stderr, "%s\n", "Problem allocation memory!");
			break;
		}
		if (ListIsFull(&movies)) {
			puts("The list is now full!");
			break;
		}
		puts("Enter next or empty line to quit:");
	}

	if (ListIsEmpty(&movies))
		puts("No data!");
	else {
		printf("Here is the movie list:\n");
		Traverse(&movies, showmovies);
	}

	printf("You entered %d movies.\n", ListItemCount(&movies));

	EmptyTheList(&movies);
	printf("Bye!\n");


	return 0;
}

void showmovies(Item * item) {
	printf("Movie: %s Rating: %d\n", item->title, item->rating);
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