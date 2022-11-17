#include <stdio.h>


int main ()
{
    char soru[] = "abcdbcbabcbdcabdbacbdb";
    int abcd[4] = {0, 0, 0, 0};

    int i;
    for (i = 0; i < sizeof(soru); i++) {
        // if (soru[i] == 'a')
        //     abcd[0] = abcd[0] + 1;
        // else if (soru[i] == 'b')
        //     abcd[1] = abcd[1] + 1;
        // else if (soru[i] == 'c')
        //     abcd[2] = abcd[2] + 1;
        // else if (soru[i] == 'd')
        //     abcd[3] = abcd[3] + 1;
        abcd[soru[i] - 'a']++;
    }

    printf("c : %d\n", abcd[2]); // 2 -> c
    printf("a : %d\n", abcd[0]); // 0 -> a
    printf("d : %d\n", abcd[3]); // 3 -> d
    printf("b : %d\n", abcd[1]); // 1 -> b


    return 0;
}
