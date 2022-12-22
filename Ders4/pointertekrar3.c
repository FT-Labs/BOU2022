#include <stdio.h>

int main ()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d);

	int *arr = &a;
	// printf("%d\n", *arr);
	// printf("%d\n", *(arr + 1));
	// printf("%d\n", *(arr + 2));
	arr++;
	arr++;
	printf("%d\n", *arr);

	int arr1[] = {1, 2, 3};
	int *arr1ptr = arr1;

	printf("%d\n", *arr1ptr);

	return 0;
}
