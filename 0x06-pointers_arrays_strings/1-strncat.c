#include "main.h"
/**
 * _strncat- function that concatenates two strings
 * @dest: Pointer destination
 * @src: Pointer source
 * @n: amount of bytes used
 * Return: Return pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
