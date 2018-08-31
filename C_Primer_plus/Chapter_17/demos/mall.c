#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer(double x);
Item customertime(long when);

int main(int argc, char const *argv[]) {
	
	Queue line;
	Item temp;  //新的顾客数据
	int hours; // 小时数
	int perhour; //每小时平均顾客数
	long cycle, cyclelimit; //循环计数器, 计数器的上线
	long turnaways = 0; //队列已满被拒的顾客数
	long customers = 0; //加入队列的顾客数量
	long served = 0; //在模拟期间咨询过的数量
	long sum_line = 0; //累计的队列总长
	int wait_time = 0; //从当前到空闲所需的时间
	double min_per_cust; //顾客到来的平均时间
	long line_wait = 0; //队列累计的等待时间

	InitializeQueue(&line);
	srand((unsigned int) time(0)); //种子

	puts("Enter the number of hours:");
	scanf("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;

	puts("Enter the average number of customers per hour:");
	scanf("%d", &perhour);
	min_per_cust = MIN_PER_HR / perhour;

	for (cycle = 0; cycle < cyclelimit; cycle++) {
		if (newcustomer(min_per_cust)) {
			if (QueueIsFull(&line)) {
				turnaways++;//满了
			}else {
				customers++;
				temp = customertime(cycle);
				EnQueue(temp, &line);
			}
		}

		if (wait_time <= 0 && !QueueIsEmpty(&line)) {
			DeQueue(&temp, &line);
			wait_time = temp.processtime;
			line_wait += cycle - temp.arrive;
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += QueueItemCount(&line);
	}

	if (customers > 0) {
		printf("customers accepted: %ld\n", customers);
		printf("  customers served: %ld\n", served);
		printf("         turnaways: %ld\n", turnaways);
	}else {
		puts("No data!");
	}

	EmptyTheQueue(&line);
	puts("Bye!");


	return 0;
}

bool newcustomer(double x) {
	if (rand() * x / RAND_MAX < 1) {
		return true;
	}else {
		return false;
	}
}

Item customertime(long when) {
	Item cust;
	cust.processtime = rand() % 3 + 1; // 1-3随机
	cust.arrive = when;
	return cust;
}