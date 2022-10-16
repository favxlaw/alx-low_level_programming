#include "lists.h"

/**
 * list_len - Gets the length of a linked list
 * @h: Pointer to the first node in the list
 *
 * Return: size_t length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *item;

	for (item = h; item != NULL; item = item->next)
		len++;

	return (len);
}
