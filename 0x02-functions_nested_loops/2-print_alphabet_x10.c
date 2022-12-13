#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num;
	char az;

	for (num = 0; num < 10; num++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
