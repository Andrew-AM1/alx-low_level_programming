#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int dre = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (dre <= n)
		dre <<= 1;
	dre >>= 1;

	while (dre > 0)
	{
		if (n & dre)
			_putchar('1');
		else
			_putchar('0');
		dre >>= 1;
	}
}
