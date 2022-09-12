#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * return: 0
 */
void jack_bauer(void)
{
	int a;
	int t;

	for (a = 0; a <= 23; a++)
	{
		for (t = 0; t <= 59; t++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (t / 10 + '0');
			_putchar (t % 10 + '0');
			_putchar ('\n');
		}
	}
}
