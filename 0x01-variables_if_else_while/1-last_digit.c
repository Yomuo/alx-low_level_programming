#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5 && n != 0)
	printf("Last digit of %d is %d %s\n", n, l, "and is greater than 5");
	else if (l < 6 && l != 0)
	printf("Last digit of %d is %d %s\n", n, l, "and is less than 6 and not 0");
	else if (l == 0)
		printf("Last digit of %d is 0 %s\n", n, "and is 0");
	return (0);
}
