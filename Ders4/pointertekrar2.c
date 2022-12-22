#include <stdio.h>

void print_array(int arr[])
{
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d\n", arr[i]);
	}
}

int main ()
{
	int a = 15;
	a *= 6;

	int *aptr = &a;
	a++;
	// printf("%d\n", *aptr);
	*aptr = a + 2;
	// printf("%d\n", a);

	/* Soru 2 */
	int arr[] = {1, 5, 4, 2};
	// printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	print_array(arr);

	return 0;
}
