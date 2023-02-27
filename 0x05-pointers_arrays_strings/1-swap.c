#include "main.h"
/**
 * swap_int - swaps values for int 'a' and 'b'
 * @a: value  for int 'a' and for funcion swap_int
 * @b: value for int 'b' and for function swap_int
 * Return Always: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
