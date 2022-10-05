#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concantenates two strings
 * @s1: string of chars
 * @s2: string of chars
 * Return: address of the newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	s = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k < i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
