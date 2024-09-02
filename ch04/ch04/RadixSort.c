#include <stdio.h>
#include <stdlib.h>

void radixSort(int a[], int n) {
	int i, max = a[0], digit_base = 1;
	int digit_cnt[10] = { 0 };
	int* b = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) if (a[i] > max) max = a[i];
	while (digit_base <= max) {
		for (i = 0; i < n; i++) digit_cnt[a[i] / digit_base % 10]++;
		for (i = 1; i < 10; i++) digit_cnt[i] += digit_cnt[i - 1];
		for (i = n - 1; i >= 0; i--) b[--digit_cnt[a[i] / digit_base % 10]] = a[i];
		for (i = 0; i < n; i++) a[i] = b[i];
		for (i = 0; i < 10; i++) digit_cnt[i] = 0;
		for (i = 0; i < n; i++) printf("%6d", a[i]); printf("\n");
		digit_base *= 10;
	}
	free(b);
}

int main(void) {
	int a[] = { 10,512,3,29,318,50,7215,1283,99,148,303,717 };
	int i, n = sizeof(a) / sizeof(int);
	radixSort(a, n);
	//	for (i = 0; i < n; i++) printf("%6d", a[i]);			//��� ���� ��
	return 0;
}
