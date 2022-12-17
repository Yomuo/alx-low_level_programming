#include "main.h"
/**
 * jack_bauer - print each minute of the day
 * Return: no return
 */
void jack_bauer(void)
{
int min, hour;
for (hour = 0; hour < 24; hour++)
{
	for (min = 0; min < 60; min++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(58);
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar(10);
	}
}
}
