#include "main.h"

/*
 * _isdigit - return if c is an int from 0 to 9
 * return 1 if c is an int or otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
