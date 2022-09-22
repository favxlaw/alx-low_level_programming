#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integer
 * @n: number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = a[j];
			a[j] = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
