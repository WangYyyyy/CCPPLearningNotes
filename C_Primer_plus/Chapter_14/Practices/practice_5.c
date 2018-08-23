#include <stdio.h>
#include <string.h>
#define LEN 10
#define NUM 3
#define CSIZE 4

char * s_gets(char * st, int n);
void eatline(void);

struct name
{
	char * m_name;
	char * f_name;
};

struct student
{
	struct name person;
	float grade[NUM];
	float average;
};

void get_score(struct student * stu, int size);
void calculate_average(struct student * stu, int size);
void list_people(struct student * stu, int size);
void calculate_all_average(struct student * stu, int size);

int main(int argc, char const *argv[]) {
	struct student stdudents[CSIZE] = {
		{{"wang0", "yu0"}, {0,0,0}, 0},
		{{"wang1", "yu1"}, {0,0,0}, 0},
		{{"wang2", "yu2"}, {0,0,0}, 0},
		{{"wang3", "yu3"}, {0,0,0}, 0},
	};

	get_score(stdudents, CSIZE);
	calculate_average(stdudents, CSIZE);
	list_people(stdudents, CSIZE);
	calculate_all_average(stdudents, CSIZE);
	return 0;
}

void get_score(struct student * stu, int size) {

	for (int i = 0; i < size; i++) {
		printf("Type the scores of 3 courses of %s %s\n",stu[i].person.m_name, stu[i].person.f_name);
		for (int j = 0; j < 3; j++) {
			scanf("%f", &stu[i].grade[j]);
		}
	}
}

void calculate_average(struct student * stu, int size) {
	float average;

	for (int i = 0; i < size; i++) {
		average = 0.f;
		for (int j = 0; j < 3; j++) {
			average+=stu[i].grade[j];
		}
		stu[i].average = average/3.f;
		printf("calculated average of %s %s\n",stu[i].person.m_name, stu[i].person.f_name);
	}
}

void list_people(struct student * stu, int size) {
	for (int i = 0; i < size; i++) {
		printf("infomation of %s %s:\n", stu[i].person.m_name, stu[i].person.f_name);
		for (int j = 0; j < 3; j++) {
			printf("grade %d: %.2f ", j, stu[i].grade[j]);
		}
		printf("average: %.2f\n", stu[i].average);
	}
}

void calculate_all_average(struct student * stu, int size) {
	float average = 0.f;
	for (int i = 0; i < size; i++) {
		average+=stu[i].average;
	}
	printf("all average is %.2f\n", average/size);
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