#include <stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

int push(int data) {
	if (top == SIZE - 1) {
		printf("stack is over full!\n");
		return -1;											//return이 있기 때문에 else 안 써도 됨
	}
	stack[++top] = data;

	return 0;
}

int pop(void) {
	if (top == -1) {
		printf("stack is Empty!\n");
		return -1;
	}

	return stack[top--];
}

int main(void) {
	push(10);												//0
	push(20);												//0
	push(30);												//0
	push(40);
	push(50);
	push(60);
	push(70);												//

	printf("%d\n", pop());									//pop는 데이터를 꺼냄		
	printf("%d\n", pop());											
	printf("%d\n", pop());											
	printf("%d\n", pop());		

	return 0;
}