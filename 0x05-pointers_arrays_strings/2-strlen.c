#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: string pointer to the string whose length is to be found
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != 0)
	{
		l++;
	}
	return (l);
}
