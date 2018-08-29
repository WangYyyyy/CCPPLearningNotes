#include <stdio.h>

#define TSIZE 45

//定义电影结构体
struct film {
	char title[TSIZE];
	int rating;
};

//一般类型定义
typedef struct film Item;

//定义链表node结构体
typedef struct node {
	Item item;
	struct node * next;
	int i;
} Node;

typedef Node * List;

int main(int argc, char const *argv[]) {
	


	// Node list2;
	List list;
	list = NULL;
	// printf("%lu\n", sizeof(list));
	// printf("%lu\n", sizeof(list2));
	// list2.next = NULL;
	// (*list).next = NULL;

	// printf("%p\n", list2.next);

	printf("%p\n", &list);

	return 0;
}