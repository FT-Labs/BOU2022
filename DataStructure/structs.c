#include <stdio.h>
#include <string.h>

struct KisiBilgisi {
	char isim_soyisim[50];
	char sehir[50];
	int yas;
};
typedef struct KisiBilgisi KisiBilgisi;

int main()
{

	KisiBilgisi kisi_bilgisi;
	printf("%d\n", sizeof(kisi_bilgisi));

	kisi_bilgisi.yas = 5;
	strcpy(kisi_bilgisi.isim_soyisim, "Bogazici 2022");
	strcpy(kisi_bilgisi.sehir, "Istanbul");

	unsigned long long a1 = (unsigned long long) &kisi_bilgisi;
	unsigned long long a2 = (unsigned long long) &kisi_bilgisi.isim_soyisim;
	unsigned long long a3 = (unsigned long long) &kisi_bilgisi.sehir;
	unsigned long long a4 = (unsigned long long) &kisi_bilgisi.yas;

	printf("Kisi bilgisi baslangic: %lld\n", (a1 % 50000));
	printf("Kisi bilgisi isim soyisim: %lld\n", (a2 % 50000));
	printf("Kisi bilgisi sehir: %lld\n", (a3 % 50000));
	printf("Kisi bilgisi yas: %lld\n", (a4 % 50000));


	// printf("Isim Soyisim: %s\n"
	//        "Sehir: %s\n"
	//        "Yas: %d", kisi_bilgisi.isim_soyisim, kisi_bilgisi.sehir, kisi_bilgisi.yas);

	// KisiBilgisi kisi_bilgisi1 = {.isim_soyisim = "adasdasdsa",
	// 			     .sehir = "Istanbul",
	// 			     .yas = 55
	// 				} ;

	// printf("Isim Soyisim: %s\n"
	//        "Sehir: %s\n"
	//        "Yas: %d", kisi_bilgisi1.isim_soyisim, kisi_bilgisi1.sehir, kisi_bilgisi1.yas);

	return 0;
}
