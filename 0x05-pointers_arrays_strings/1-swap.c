#include "main.h"
/**
 * swap_int- function that swaps variable values
 * @a: 1st pointer
 * @b: 2nd pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
