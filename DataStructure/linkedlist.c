#include <stdio.h>

typedef struct LinkedList LinkedList;
struct LinkedList {
	int data;
	int *next;
};


int main()
{
	LinkedList head = {.data = 3 };
	LinkedList second = {.data = 5};
	head.next = (int *)&second;

	printf("head: %d\n", head.data);
	printf("second: %d\n", ((LinkedList*) head.next)->data);

	return 0;
}
