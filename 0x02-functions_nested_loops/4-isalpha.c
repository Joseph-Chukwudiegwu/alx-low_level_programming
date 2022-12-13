#include "main.h"

/**
 * _isalpha - check for alphabet characters
 * @c: the alphabet is to be checked
 * Return: 1 if alphabet is lower or upper, or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
