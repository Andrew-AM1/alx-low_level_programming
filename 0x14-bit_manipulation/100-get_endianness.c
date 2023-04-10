#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int dre;
	char *c = (char *) &dre;

	dre = 1;

	return (*c);
}
