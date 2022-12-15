#include "main.h"

/**
 * print_numbers - print numbers between 0 to 9
 * Return: no return
 */

void print_numbers(void)
{
	int xy;

	for (xy = 48; xy < 58; xy++)
	{
		_putchar(xy);
	}
	_putchar('\n');
}
