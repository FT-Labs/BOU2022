#include <stdio.h>


int main ()
{
	char deneme[50] = "hello world";
	char *dnm = deneme;

	printf("%s\n", dnm);
	dnm++;
	printf("%s", dnm);

	return 0;
}
