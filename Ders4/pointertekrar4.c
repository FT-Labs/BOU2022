#include <stdio.h>
#include <string.h>

int main ()
{
	char bou[50] = "Bogazici 2022 C ogreniyoruz";
	char *bouptr = bou;
	int max_length = strlen(bou);

	int j = 0;
	for (int i = 0; i < 50; i++) {
		if (bou[i] == ' ') {
			bou[i] = '\0';
			j++;
		}
	}
	j++;
	// printf("%s\n", bou);
	// printf("%d\n", strlen(bou));

	// char deneme1[50];

	// strcpy(deneme1, bou);
	// printf("%s\n", deneme1);


	// strcpy(split_string[0], bou);
	// int str_length = strlen(bou) + 1;
	// printf("%d\n", str_length);
	// printf("%s\n", split_string[0]);
	// strcpy(split_string[1], bou + str_length);
	// printf("%s\n", split_string[1]);
	// printf("%d\n", strlen(bou + str_length));

	char split_string[j][50];
	for (int i = 0; i < j; i++) {
		strcpy(split_string[i], bouptr);
		bouptr = bouptr + strlen(bouptr) + 1;
	}

	for (int i = 0; i < j; i++) {
		printf("%s\n", split_string[i]);
	}


	// strcpy(split_string[0], bouptr);
	// printf("%s\n", split_string[0]);
	// bouptr = bouptr + strlen(bouptr) + 1;
	// strcpy(split_string[1], bouptr);
	// printf("%s\n", split_string[1]);
	// bouptr = bouptr + strlen(bouptr) + 1;
	// strcpy(split_string[2], bouptr);
	// printf("%s\n", split_string[2]);
	// bouptr = bouptr + strlen(bouptr) + 1;
	// strcpy(split_string[3], bouptr);
	// printf("%s\n", split_string[3]);

	return 0;
}
