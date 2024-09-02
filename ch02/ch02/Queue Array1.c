#include <stdio.h>
#define SIZE 6

int Queue[SIZE];

int rear = -1, front = 0;
int add(int data) {
	if (rear == SIZE - 1) {
		printf("Queue is Full!\n");
		return -1;
	}
	Queue[++rear] = data;
	return 0;
}

int main(void) {
	add(10);	add(20);	add(30);
	add(40);	add(50);
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	add(60);	add(70);			//Overflow 발생
}

int delete(void) {
	if (rear < front) {
		printf("Queue is Enpty!\n");
		return -1;
	}
	return Queue[front++];
}

//선형 큐