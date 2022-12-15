#include "main.h"

/**
 * print_most_numbers - print number between 0 to 9 (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int xy;

	for (xy = 48; xy < 58; xy++)
	{
		if (xy != 50 && xy != 52)
			_putchar(xy);
	}
	_putchar('\n');
}
