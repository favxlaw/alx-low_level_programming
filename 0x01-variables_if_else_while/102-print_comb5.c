#include <stdio.h>
#include <stdlib.h>
/**
 * main - enter main
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d;
	int e;

	int c2;
	int d2;
	int e2;

	while (c <= 98)
	{
		d = (c / 10 + '0');
		e = (c % 10 + '0');
		c2 = 0;

		while (c2 <= 99)
		{
			d2 = (c2 / 10 + '0');
			e2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(d);
				putchar(e);
				putchar(' ');
				putchar(d2);
				putchar(e2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
