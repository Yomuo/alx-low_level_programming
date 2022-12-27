#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: is the number of times the character \ should be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			break;

		}
		else
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
		}
		_putchar(92);
		_putchar(10);
	}
	_putchar(10);
}
