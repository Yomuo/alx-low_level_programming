#include "main.h"
/**
 * print_triangle - a program that prints a triangle
 * @size: size of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int row, space, block;

	for (row = 1; row <= size; row++)
	{
		if (size <= 0)
		{
			break;
		}
			for (space = 1; space <= (size - row); space++)
			{
				_putchar(' ');
			}
			for (block = 1; block <= row; block++)
			{
				_putchar('#');
			}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
