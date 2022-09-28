#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the termninating null byte, to the buffer pointed to by dest.
 * @dest: destintion
 * @src: source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) != '\0')
			count++;
		else
			count = -1;
	}
	return (dest);
}
