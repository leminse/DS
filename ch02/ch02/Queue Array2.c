#include <stdio.h>
#define SIZE 6

int queue[SIZE];
int rear = -1, front = 0;

int cnt = 0;   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ�

int add(int data) {
    if (cnt == SIZE) {   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ� (cnt == SIZE)
        printf("Queue is Full!\n");
        return -1;
    }queue[++rear % SIZE] = data;   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ� ( % SIZE)
    cnt++;   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ�
    return 0;

}
int delete(void) {
    if (cnt == 0) {   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ� (cnt == 0)
        printf("Queue is Empty!\n");
        return -1;
    }
    cnt--;   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ�
    return queue[front++ % SIZE];   //���� ť���� ȯ�� ť�� �ٲٱ� ���� �ڵ� ( % SIZE)
}

int main(void) {
    add(10); add(20); add(30); add(40); add(50);
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());
    printf("%d\n", delete());

    add(60);   //���������� ó��
    add(70);   //index�� 0�� ��

    return 0;
}