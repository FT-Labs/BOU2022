#include <stdio.h>

void bitanefonksiyon(int arr[])
{
    arr[0] = 1000000;
}


int main ()
{
    int arr[] = {1, 2, 3};

    printf("%d\n", sizeof(arr));
    printf("%d\n", arr[0]);

    bitanefonksiyon(arr);
    printf("%d\n", arr[0]);

    return 0;
}
