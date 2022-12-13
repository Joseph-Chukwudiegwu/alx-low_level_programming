#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num += -1;
	_putchar(num + '0');

	return (0);
}
