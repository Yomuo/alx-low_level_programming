#include "main.h"
/**
 * print_most_numbers - print digits expext 2&4
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= '9'; i++)
	{
		if (i == '2' && i == '4')
		{
			break;
		}
		_putchar(i);
	}
}
