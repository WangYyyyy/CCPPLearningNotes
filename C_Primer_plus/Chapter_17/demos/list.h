#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

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
} Node;

typedef Node * List;

void InitializeList(List * plist);

bool ListIsEmpty(const List * plist);

bool ListIsFull(const List * plist);

unsigned int ListItemCount(const List * plist);

bool AddItem(Item item, List * plist);

void Traverse(const List * plist, void(*pfun)(Item * item));

void EmptyTheList(List * plist);


#endif