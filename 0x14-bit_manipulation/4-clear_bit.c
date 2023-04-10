#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to changed num.
 * @index: index of the bit.
 * Return: 1 if successful, -1 if not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int drew = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((*n & drew) == 0)
		return (1);

	*n ^= drew;

	return (1);
}
