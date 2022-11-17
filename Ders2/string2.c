#include <stdio.h>


int main ()
{
    char bogazici1[] = "Bogazici 2022";
    char bogazici2[] = "Bogazici\0 2022";
    printf("%s\n", bogazici1);
    printf("%s\n", bogazici2);
    printf("%s\n", (bogazici2 + 9));

//    bogazici2[3] ==  (bogazici2 + 3)
    return 0;
}
