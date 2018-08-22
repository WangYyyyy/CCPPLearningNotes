#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 20
#define ABB_LEN 10

char * s_gets(char * st, int n);
void ToUpper(char * str);
int check_days(char * str);

struct month {
	char name[LEN];
	char abb_name[ABB_LEN];
	int days;
	int month_no;
};

struct month months[12] = {
	{"January", "JAN", 31, 1},
	{"February", "FEB", 28, 2},
	{"March", "MAR", 31, 3},
	{"April", "APR", 30, 4},
	{"May", "MAY", 31, 5},
	{"June", "JUN", 30, 6},
	{"July", "JUL", 31, 7},
	{"August", "AUG", 31, 8},
	{"September", "SEP", 30, 9},
	{"October", "OCT", 31, 10},
	{"Novermber", "NOV", 30, 11},
	{"December", "DEC", 31, 12}
};

int main(int argc, char const *argv[])
{
	puts("type 3 chars");
	char str[ABB_LEN];
	int days;

	while(s_gets(str, ABB_LEN) && str[0]) {
		days = check_days(str);	
		if (days < 0) {
			puts("wrong typed!");
		}else {
			printf("days is %d\n", days);
		}
		puts("continue or enter to quit:");
	}
	
	return 0;
}

void ToUpper(char * str) {
	while(*str) {
		*str = toupper(*str);
		str++;
	}
}

int check_days(char * str) {
	ToUpper(str);
	int index = -1;
	int days = 0;

	for (int i = 0; i < 12; ++i) {
		if (!strcmp(months[i].abb_name, str)) {
			index = i;
			break;
		}
	}
	if (index < 0) {
		return -1;
	}
	for (int i = 0; i <= index; i++) {
		days+=months[i].days;
	}
	return days;
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