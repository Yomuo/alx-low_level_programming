#include <stdio.h>
/**
 * main - program that prints number or fizz or buzz
 * depends on the number
 * Return: return 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf(" Fizz");
}
else if ((i % 5) == 0)
{
printf(" Buzz");
}
else if ((i % 3) == 0 && (i % 5) == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
putchar(10);
return (0);
}
