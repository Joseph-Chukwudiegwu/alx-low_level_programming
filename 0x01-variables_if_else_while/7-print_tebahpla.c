#include <stdio.h>
/**
 * main - print all alphabet in lowercase and in reverse followed by a new line
 * Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
