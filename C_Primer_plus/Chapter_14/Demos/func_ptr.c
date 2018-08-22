#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81

char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void); //读取至行末尾

void show(void(*fp)(char *), char * str); //接受一个函数指针, 一个字符串

void ToUpper(char * str); //转大写
void ToLower(char * str); //转小写
void Transpose(char * str); //大小写互转
void Dummy(char * str); //不改变字符串

int main(int argc, char const *argv[])
{
	char line[LEN];
	char copy[LEN];
	void (*pfun)(char *);
	char choice;

	puts("Enter a string (empty line to quit):");
	while(s_gets(line, LEN) && line[0]) {
		while((choice = showmenu()) != 'n') {
			switch(choice) {
				case 'u':
					pfun = ToUpper;
					break;
				case 'l':
					pfun = ToLower;
					break;
				case 't':
					pfun = Transpose;
					break;
				case 'o':
					pfun = Dummy;
					break;	
			}
			show(pfun, strcpy(copy, line));
		}
		
		puts("Enter a string (empty line to quit):");
	}
	puts("Bye!");

	return 0;
}

void Transpose(char * str) {
	while(*str) {
		if (islower(*str))
			*str = toupper(*str);
		else if (isupper(*str))
			*str = tolower(*str);
		str++;
	}
}

void ToUpper(char * str) {
	while (*str) {
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char * str) {
	while (*str) {
		*str = tolower(*str);
		str++;
	}
}

void Dummy(char * str) {
	//do nothing
}

void show(void(*fp)(char *), char * str) {
	(*fp)(str); //与 fp(str)等价
	puts(str);
}

char showmenu(void) {
	char ans;

	puts("Enter menu choice:");
	puts("u) uppercase         l) lowercase");
	puts("t) transposed case   o) original case");
	puts("n) next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();

	while (strchr("ulton", ans) == NULL) {
		puts("Please enter a u, l, t, o or n:");
		ans = tolower(getchar());
		eatline();
	}

	return ans;
}

void eatline(void) {
	while(getchar() != '\n')
		continue;
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