#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the destination of the string
 * @src: the source of string
 * @n: the length of int
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	{
		continue;
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[j + k] = src[k];
	}

	dest[j + k] = '\0';
	return (dest);
}
