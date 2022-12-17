#include "main.h"

/**
 *print_sign - function that print the sign of a number
 *@n : is taken as an input
 * print the sign of a number given to her
 *Return: return 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
