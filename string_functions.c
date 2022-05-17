#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to the sting being checked
 *
 * Return: the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies the string being pointed to
 * @dest: destination
 * @src: source
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * n_spaces - retirns the number of spaces in a string
 * @s: the string to be checked
 *
 * Return: the spaces
 */
unsigned int n_spaces(char *s)
{
	int i, c = 0;

	for (i = 0, s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			c++;
	}
	return (c);
}
