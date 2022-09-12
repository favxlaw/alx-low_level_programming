#include "main.h"
/**
 * times_table-  prints the 9 times table, starting with 0
 * Return: Void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int mul;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			mul = a * b;
			if (b == 0)
			{
				_putchar('0' + mul);
			}
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
