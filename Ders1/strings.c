#include <stdio.h>


int main ()
{
    // \n -> yeni satir
    // \t -> bir tane tab at
    printf("\\");

    const char *a = "hello";
    const char *b = "world";
    const char *c = "bogazici";
    const char *d = "2022";

    printf("%s %s %s %s\n", a, a, a, a);

    float ondaliklisayi = 1.33f;

    ondaliklisayi = ondaliklisayi / 2;
    // kisa yol
    // ondaliklisayi /= 2;

    printf("%f\n", ondaliklisayi);

    int tamsayi = 7;

    tamsayi = tamsayi / 2;

    printf("%f\n", ((float) tamsayi) / 2);



    return 0;
}
