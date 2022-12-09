#include <stdio.h>
/**
 * main - print all alphabet in lowercase except q and e followed by a new line
 * Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}

	putchar('\n');

	return (0);
}
