#include <stdio.h>
#include <string.h>
#include "queue.h"


char * s_gets(char str[], int len);

int main(int argc, char const *argv[]) {
	
	Queue line;
	Item temp;
	char ch;

	InitializeQueue(&line);
	puts("Testing the Queue interface. Type a to add a value,");
	puts("type d to delete a value, and type q to quit");
	while((ch = getchar()) != 'q') {
		if (ch != 'a' && ch != 'd')
			continue;//忽略其它输出

		if (ch == 'a') {
			printf("Integer to add:");
			scanf("%d", &temp);
			if (!QueueIsFull(&line)) {
				printf("Putting %d into queue\n", temp);
				EnQueue(temp, &line);
			}else {
				puts("Queue is full!");
			}
		}else {

			if (QueueIsEmpty(&line)) {
				puts("No data!");
			}else {
				DeQueue(&temp, &line);
				printf("removing %d from queue\n", temp);
			}
		}
		printf("%d items in queue\n", QueueItemCount(&line));
		puts("Type a to add, d to delete, q to quit:");
	}
	EmptyTheQueue(&line);
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