#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: numbers of triangle to print
 * Return: 0
 */

void print_triangle(int size)
{
	int row, columns, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (columns = 1; columns <= size - row; columns++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			if (row == size)
				continue;
			_putchar('\n');
		}
			_putchar('\n');
	}
}
