#include <stdio.h>
/**
 * main - print different combinations of two digits.
 * Return: 0
*/
int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (x < 56 || y < 57)
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
