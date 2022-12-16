#include <ctype.h>
/**
 * _islower - know is the character is in lowercase
 * @c: charecter will verified
 *  Return: return 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
