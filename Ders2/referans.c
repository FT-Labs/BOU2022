#include <stdio.h>


int main ()
{
    int x = 5;

//    printf("%p\n", &x);

    const char *bogazici = "BOU 2022 C dersi\0";

    printf("%p = B'nin tutuldugu yer\n%p = O'nun tutuldugu yer", &bogazici[0], &bogazici[1]);

    int arr[] = {1, 2, 3, 4, 5};

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);

    printf("%p = 1'in tutuldugu yer\n%p = 2'nin tutuldugu yer", &arr[0], &arr[1]);



    return 0;
}
