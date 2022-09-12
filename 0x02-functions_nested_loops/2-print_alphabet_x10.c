#include "main.h"
/**
 * print_alphabet_x10()- prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	char times = 0;

	while (times < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		times++;
	}
}
