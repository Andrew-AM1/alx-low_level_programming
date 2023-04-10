#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at agiven index.
 * @n: pointer to changed number.
 * @index: index of the bit.
 * Return: 1 if its successful, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int dre;

	if (index >= 64)
		return (-1);

	dre = 1 << index;
	*n = (*n | dre);
	return (1);
}
