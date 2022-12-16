#include <stdio.h>
#include "main.h"

/**
 * main - print Buzz each numbers of 3 and 5
 * Return: 0
 */

int main(void)
{
	int n;


	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%i", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
