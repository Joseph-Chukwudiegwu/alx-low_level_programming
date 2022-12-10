#include <stdio.h>
/**
 * main - print different combinations of three digits
 * Return: 0
*/
int main(void)
{
	int x, y, z;

	x = 48;
	y = 48;
	z = 48;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (z < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x < 55 || y < 56 || z < 57)
				{
					putchar(44);
					putchar(32);
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
