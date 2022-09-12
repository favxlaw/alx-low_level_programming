#include "main.h"
/**
 * print_last_digit- prints the last digit of a number
 * @r: used for the argument of the function
 * Return: Value of last digit
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
