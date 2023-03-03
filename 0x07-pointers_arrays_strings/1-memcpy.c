#include "main.h"
/**
 * _memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest:  memory is stored
 * @src: memory is src
 * @n: variable for bytes
 * Return: Always 0 success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
