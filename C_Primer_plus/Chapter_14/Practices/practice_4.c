#include <stdio.h>
#include <ctype.h>
#define MAX_NAME 40

struct person {
	char name[MAX_NAME];
	char mid_name[MAX_NAME];
	char family_name[MAX_NAME];
};

struct social_security_info {
	int number;
	struct person person_info;
};



void list_people(struct social_security_info[], int n);
void check_mid_name(char * str, char * target_str);

int main(int argc, char const *argv[])
{
	struct social_security_info info[5] = {
		{
			20,
			{
				"name",
				"midname",
				"fname"
			}
		},
		{
			21,
			{
				"name1",
				"",
				"fname1"
			}
		}
	};
	list_people(info, 2);

	return 0;
}

void list_people(struct social_security_info infos[], int n) {
	char mid[3];
	for (int i = 0; i < n; ++i) {
		check_mid_name(infos[i].person_info.mid_name, mid);
		printf("%s''''\n", mid);
	}

}

void check_mid_name(char * str, char * target_str) {
	if (str[0]) {
		target_str[2] = '\0';
		target_str[1] = '.';
		target_str[0] = toupper(str[0]);
	}else {
		target_str[0] = '\0';
	}
}

