#include "main.h"
/**
 * _strlen- funtion that returns the length of a string
 * @s: pointer of stringb output
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
