#include "main.h"
/**
 * _memset - Function taht fills the memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of integers
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
