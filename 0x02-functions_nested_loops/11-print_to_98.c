#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * followed by a new line.
 * @n : integer
 * The first printed number should be the number passed to your function
 * Numbers should be printed in order
 * The last printed number should be 98
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("98");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("98");
	}
}
