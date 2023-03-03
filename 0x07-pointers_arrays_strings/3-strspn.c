#include "main.h"
/**
 * _strspn - a functionn that retturns the number of bytes
 * @s: a variable that containns bytes for "accept"
 * @accept: contains bytes
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
