#include <stdio.h>

/**
 * main - print first 50 fibonacci
 * Return: 0
 */

int main(void)
{
	int num;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
