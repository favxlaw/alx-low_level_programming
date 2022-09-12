#include "main.h"
/**
 * print_alphabet- prints the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
