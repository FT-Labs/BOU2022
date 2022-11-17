#include <stdio.h>


int main ()
{
    char bogazici[] = "Bogazici";

    printf("%s\n", bogazici);


    printf("%d\n", sizeof(bogazici));

    for (int i = 0; i < 100000000; i++) {
        if (bogazici[i] == 0)
            return 0;
        printf("%c", bogazici[i]);
    }

    return 0;
}
