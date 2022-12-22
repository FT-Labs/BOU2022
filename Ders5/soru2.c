#include "zaman.h"

void swp(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j+1])
				swp(&arr[j], &arr[j+1]);
		}
	}
}

int main ()
{
	int arr[50];
	// srand(time(NULL));
	RANDARR(arr, 50, 101);

	for (int i = 0; i < 50; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, 50);

	for (int i = 0; i < 50; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
