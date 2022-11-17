#include <stdio.h>



int main ()
{
    char alfabe[] = "fasjdlkfjasdlkgafdsahfjksdhfskjazxcvbmqewriqpeoirqweiryqpzxchkjhdasfbnmasdashdajkljqeqwjkljqwljebapp";

    int arr[26] = {0};

    for (int i = 0; i < sizeof(alfabe); i++) {
        arr[alfabe[i] - 'a']++;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%c : %d\n", i + 'a', arr[i]);
    }

    return 0;
}
