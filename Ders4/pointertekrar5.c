#include <stdio.h>

int main ()
{
	int x = 5;

	int *xptr = &x;

	int arr[5];
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);

	return 0;
}
