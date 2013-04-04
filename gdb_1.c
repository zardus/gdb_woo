#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *key = "KEY:This is the key!";
	char key_copy[100];

	strncpy(key_copy, key, 99);
	key_copy[99] = 0;

	printf("The first part of the key is: %.3s\n", key);
	return 0;
}
