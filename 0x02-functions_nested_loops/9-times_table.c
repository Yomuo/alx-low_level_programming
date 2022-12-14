#include "main.h"
/**
 *times_table - function that prints the 9 times table, starting with 0.
 *Return: no return
 */
void times_table(void)
{
	int digit, multi, result;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			result = digit * multi;
			if (result <= 9)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar(10);
	}
}
