#include <stdio.h>

/**
 * main - prints the sum of even-value sequence, terms not exceeding 4000000
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float total_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			total_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}

	printf("%.0f\n", total_sum);

	return (0);
}
