#include <stdio.h>
/**
 * main - print the numbres of base 16 in lowercase
 * Return: 0
*/
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alpha = 'a'; alpha < 'g'; alpha++)
		putcha(alpha);

	putchar('\n');

	return (0);
}
