#inlcude "main.h"
/**
 * print_line -  function that draws a straight line in the terminal.
 * @n: n is the number of times the character _ should be printed
 * Return : no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
}