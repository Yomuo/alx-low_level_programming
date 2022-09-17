#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	l = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of %d is %d %s\n", n, l, "and is greater than 5");
	else if (n < 6 && n != 0)
	printf("Last digit of %d is %d %s\n", n, l, "and is less than 6 and not 0");
	else
		printf("Last digit of %d is %d %s\n", n, l, "and is 0");
	return (0);
}
