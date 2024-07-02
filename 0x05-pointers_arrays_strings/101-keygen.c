#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for the 101-crackme program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, length = 12;  /* Length of the password */
	char password[13];   /* One extra for the null terminator */
	const char charset[] = "abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"0123456789";
	srand(time(NULL));
	
	/* Generate random password */
	for (i = 0; i < length; i++)
	{

		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[length] = '\0';  /* Null-terminate the string */

	printf("%s\n", password);

	return (0);
}
