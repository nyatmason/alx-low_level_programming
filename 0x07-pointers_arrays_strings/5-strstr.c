#include "main.h"
/**
 * _strstr - a function that finds the occurence of a substring
 * @haystack: a var containing a substring
 * @needle: a var containing a substring
 * Return: Always 0 success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
