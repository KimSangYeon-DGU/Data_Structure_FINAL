#include "Merge_Sort.h"

int main() {
	int random;
	srand((unsigned)time(NULL));
	for (int n = 0; n < 10; n++) {
		random = (rand() % 100) + 1;
		list[n] = random;
	}
	merge_sort(list, 0, MAX_SIZE - 1);
	showList(list, 0 ,MAX_SIZE - 1);
	return 0;
}

void merge_sort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;

		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);

		merge(list, left, mid, right);
	}
}

void merge(int list[], int left, int mid, int right) {
	int i = left; 
	int j = mid + 1;
	int k = left;
	while (i <= mid && j <= right) {
		if (list[i] <= list[j]) sorted[k++] = list[i++];
		else sorted[k++] = list[j++];
	}

	if (i > mid) for (int n = j; n <= right; n++) sorted[k++] = list[n];
	else for (int n = i; n <= mid; n++) sorted[k++] = list[n];

	//บนป็
	for (int n = left; n <= right; n++)
		list[n] = sorted[n];
}

void showList(int list[], int left, int right) {
	for (int i = left; i <= right; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}