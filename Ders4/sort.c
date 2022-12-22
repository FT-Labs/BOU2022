#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

void swap(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int main ()
{
	srand(time(NULL));

	int arr[100];

	for (int i = 0; i < LENGTH(arr); i++) {
		arr[i] = rand() % 512;
	}

	bubble_sort(arr, LENGTH(arr));

	for (int i = 0; i < LENGTH(arr); i++) {
		printf("%d, ", arr[i]);
	}


	return 0;
}
