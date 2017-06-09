#pragma once
#include "Quick_Sort.h"

int main() {
	int random;
	srand((unsigned)time(NULL));
	for (int n = 0; n < 10; n++) {
		random = (rand() % 100) + 1;
		list[n] = random;
	}

	quick_sort(list, 0, MAX_SIZE - 1);
	showList(list, 0, MAX_SIZE - 1);
	return 0;
}

void quick_sort(int list[], int left, int right) {
	int j;
	if (left < right) {
		j = partition(list, left, right);

		quick_sort(list, left, j - 1);
		quick_sort(list, j + 1, right);
	}
}

int partition(int list[], int left, int right) {
	int i = left; 
	int j = right + 1;
	int pivot = list[left];
	while (i < j) {
		while (list[++i] < pivot);
		while (list[--j] > pivot);
		if(i < j) SWAP(list[i], list[j]);
	}
	SWAP(list[left], list[j]);
	return j;
}

void showList(int list[], int left, int right) {
	for (int i = left; i <= right; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}