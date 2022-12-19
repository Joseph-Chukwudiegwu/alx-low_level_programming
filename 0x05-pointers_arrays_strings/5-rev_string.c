#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0, b, c;
	char d;

	while (s[count] != '\n')
	{
		count++;
	}

	c = count - 1;
	for (b = 0; c >= 0 && b < c; c--; b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
