#include <stdio.h>



int main ()
{
    char rakamlar[] = "7571928724310472391512307428375105731010327412894721934234";
    int arr[10] = {0};

    int i;
    for (i = 0; i < sizeof(rakamlar); i++) {
        arr[rakamlar[i] - '0']++;
        // arr[7 - 0] = 1
        // arr[5 - 0] = 1
        // arr[7 - 0] = 2
    }

    for (i = 0; i < 10; i++) {
        printf("%c : %d\n", i, arr[i]);
    }
    return 0;
}
