#include <stdio.h>
/**
 * main - print alphabets in lower and uppercase
 * Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putcha(alpha);

	putchar('\n');
	return (0);
}
