#include <stdio.h>

char a = 'a';

int main ()
{
    printf("%c\n", a);

    int i1 = 1;
    int i2 = 1;
    int i3 = 2;

    // Dogru
    if (i1 == i2) {
        printf("1");
        if (i1 != i3)
            printf("2");
    } else {
        printf("3");
        printf("4\n");
    }

    // HATALI
    // if (i1 == i2)
    //     printf("1");
    //     if (i1 != i3)
    //         printf("2");
    // else
    //     printf("3");
    //     printf("4\n");


    return 0;
}
