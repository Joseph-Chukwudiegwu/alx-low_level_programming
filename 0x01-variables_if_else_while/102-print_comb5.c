#include <stdio.h>
/**
 * main - print all combinations of two two-digits numbers
 * Return: 0
*/
int main(void)
{
	int w, x, y, z;

	w = 48;
	while (w < 58)
	{
		x = 48;
		while (x < 58)
		{
			z = x + 1;
			y = w;
			while (y < 58)
			{
				while (z < 58)
				{
					putchar(w);
					putchar(x);
					putchar(32);
					putchar(y);
					putchar(z);
					if (w < 57 || x < 56 || y < 57 || z < 57)
					{
						putchar(44);
						putchar(32);
					}
					z++;
				}
				z = 48;
				y++;
			}
			x++;
		}
		w++;
	}
	putchar(10);
	return (0);
}
