#include <stdio.h>


// void swap(int a, int b)
// {
// 	int tmp = b;
// 	b = a;
// 	a = tmp;
// }

void swap(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main ()
{
	/* Soru 1 */
	// {
	// 	int a = 5;
	// }

	// printf("%d\n", a);

	/* Soru 2 */
	int a = 5, b = 10;;
	printf("a: %d\nb: %d\n", a, b);
	swap(&a, &b);
	printf("a: %d\nb: %d", a, b);

	/* Soru 3 */
	// int b = 32769;
	// short a = 32767;
	// a++;
	// printf("%hi", a);


	return 0;
}
