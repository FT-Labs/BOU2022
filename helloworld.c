#include <stdio.h>
#include <string.h>


int main()
{
    printf("%s", "Hello world\n");

    char a = 'a';
    const char *bogazici = "Merhaba bogazici";
    printf("%s", bogazici);

    char yeni1[] = "12345sdasddasldasdasjka";
    yeni1[0] = '9';

    printf("%s\n", yeni1);


    return 0;
}
