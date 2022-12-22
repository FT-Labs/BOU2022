#include <stdio.h>
#include <math.h>

int asalmi(unsigned int a)
{
	// asalsa 1 donun, degilse 0 donun
	if (a <= 1)
		return 0;
	else if (a == 2)
		return 1;
	else {
		for (int i = 2; i * i < a; i++) {
			if (a % i == 0)
				return 0;
		}
	}
	return 1;
}


int main ()
{
	printf("Lutfen bir sayi giriniz.\n");
	int sayi;
	scanf("%d", &sayi);

	int cevap = asalmi(sayi);

	if (cevap) {
		printf("Asaal");
	} else {
		printf("Asal degil");
	}

	return 0;
}
