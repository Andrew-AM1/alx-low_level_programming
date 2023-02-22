#include "main.h"

/**
 * _islower - Shows 1 if the input is 'a' lowercase character.
 * Other cases, shows 0
 *
 * @a: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
