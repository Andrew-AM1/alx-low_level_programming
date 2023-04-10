#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to 
 * get from one number to another
 * @n: first number.
 * @m: second number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;

	unsigned long int dre = n ^ m;

	while (dre)
	{
		num_bits += dre & 1;
		dre >>= 1;
	}

	return (num_bits);
}
