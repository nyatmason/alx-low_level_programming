#include "main.h"
/**
 * _strpbrk - a function that locates the first occurence of a string
 * @s: variable that contains a string
 * @accept: a variable for bytes
 * Return: Always 0 success
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
