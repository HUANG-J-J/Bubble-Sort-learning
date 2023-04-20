#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void InitARR(int* &arr, int len) {
	arr = (int*)calloc(len, sizeof(int));
	
	for (int i = 0; i < len; i++) {
		if (arr)		
			arr[i] = rand() % 100;
	}
}

void PrintARR(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void swap(int &a, int &b) {
	int flag = a;
	a = b;
	b = flag;
}

void BubbleSort(int* arr, int len) {
	int i = 0, j = 0;
	bool flag = true;
	for (i = 0; i < len - 1; i++) {
		flag = true;
		for (j = len - 1; j > i; j--)
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
				flag = false;
			}
		if (flag)  //没有发生交换，直接退出
			return;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int* ARR = NULL;
	int i = 0;
	InitARR(ARR, length);
	PrintARR(ARR, length);
	printf("\n\n-------BUBBLESORT--------\n\n");
	BubbleSort(ARR, length);
	PrintARR(ARR, length);

	return 0;
}

