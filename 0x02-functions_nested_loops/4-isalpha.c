#include <stdio.h>
/**
 *_isalpha - control if a character is alphabetical
 *@c: character is alphabetical
 *Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
