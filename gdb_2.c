#include <stdio.h>
#include <string.h>

int decrypt_key(char *k)
{
	int l;
	for (l = strlen(k) - 1; l>=0; l--)
		k[l] += 13;
}

int main(int argc, char **argv)
{
	char *encrypted_key = "fhcrefrperg";
	char key_copy[100];

	strcpy(key_copy, encrypted_key);
	decrypt_key(key_copy);

	return 0;
}
