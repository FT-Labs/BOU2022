#include <stdio.h>


int main ()
{
    // Bundan 1 cikartirsak ne olur?
    short kucuksayi = -32768;

    printf("%d\n", kucuksayi);

    kucuksayi = kucuksayi - 1;

    printf("%d\n", kucuksayi);

    return 0;
}
