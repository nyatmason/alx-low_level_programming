#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * @s: a var for characters
 * @b: a var for constant byte
 * @n: an interger variable
 * Return: Always 0 success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
