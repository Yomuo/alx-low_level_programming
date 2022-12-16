#include "main.h"
/**
*print_alphabet_x10 - print alphabet
*ten times
*desc: the function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int r;
for (r = 'a'; r <= 'z'; r++)
{
_putchar(r);
}
_putchar(10);
}
}
