#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input(num to search).
 * @index: index of the bit.
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int dre;

	if (n == 0 && index <= 63)
		return (0);

	for (dre = 0; dre <= 63; n >>= 1, dre++)
	{
		if (index == dre)
		{
			return (n & 1);
		}
	}

	return (-1);
}
