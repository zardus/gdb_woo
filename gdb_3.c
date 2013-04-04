#include <stdio.h>
#include <string.h>

int decrypt_key(char *k)
{
	int l = strlen(k);

	for (int i = 0; i < 256; i++)
		for (int l = strlen(k) - 1; l>=0; l--)
			k[l] += i;
}

int main(int argc, char **argv)
{
	char *encrypted_key = "fhcrefrperg";

	decrypt_key(encrypted_key);

	return 0;
}
