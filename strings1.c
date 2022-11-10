#include <stdio.h>


int main ()
{
    char isim[50];
    char soyisim[50];
    int yas;

    printf("Lutfen isminizi girin..\n");
    scanf("%s", isim);
    printf("Lutfen soyisminizi girin..\n");
    scanf("%s", soyisim);
    printf("Lutfen yasinizi girin..\n");
    scanf("%d", &yas);

    // Gereksiz uzun
    // printf("%s", isim);
    // printf("%s", soyisim);
    // printf("%d", yas);

    printf("%s %s %d", isim, soyisim, yas);


    return 0;
}
