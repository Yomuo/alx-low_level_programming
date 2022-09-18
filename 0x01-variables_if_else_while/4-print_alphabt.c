#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		if (cr != 'q' && cr != 'e')
			putchar (cr);
	}
	putchar('\n');
	return (0);
}
