#include "zaman.h"
#define KUCUK_ALFABE 'a'
#define BUYUK_ALFABE 'A'

int main ()
{
	int count[52] = {0};
	char yazilar[500];
	srand(time(NULL));

	for (int i = 0; i < 500; i++) {
		char random_char;
		if (rand() % 2) {
			random_char = KUCUK_ALFABE + rand() % 26; // buyuk alfabeyi kullanalim
		} else {
			random_char = BUYUK_ALFABE + rand() % 26; // kucuk alfabeyi kullanalim
		}
		yazilar[i] = random_char;
	}

	for (int i = 0; i < 500; i++) {
		if (yazilar[i] < KUCUK_ALFABE) {
			// BUYUK_ALFABE
			count[yazilar[i] - BUYUK_ALFABE]++;
		} else {
			// KUCUK_ALFABE
			count[yazilar[i] - KUCUK_ALFABE + 26]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%c: %d\t%c: %d\n",
			(char) i + BUYUK_ALFABE, count[i],
			(char) i + BUYUK_ALFABE + 32, count[i + 26]
			);
	}

	// printf("%s\n", yazilar);

	return 0;
}
