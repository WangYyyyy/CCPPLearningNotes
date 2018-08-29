#include <stdio.h>
#include <string.h>
#define TSIZE 45 //片名数组大小
#define FMAX 5 //最大影片数

struct film {
	char title[TSIZE];
	int rating;
};

char * s_gets(char str[], int len);

int main(int argc, char const *argv[]) {
	struct film movies[FMAX];
	int i = 0;
	int j;

	puts("Enter first movie title:");
	while(i < FMAX && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0') {
		puts("Enter your rating <0-10>:");
		scanf("%d", &movies[i].rating);
		i++;
		while(getchar() != '\n')
			continue;
		puts("Enter next movie title (empty to stop):");
	}

	if (i == 0) {
		puts("No Data!");
	}else {
		puts("Here is the movie list:");
	}

	for (j = 0; j < i; j++) {
		printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
	}

	puts("Bye!");

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