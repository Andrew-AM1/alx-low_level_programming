#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int strRev = 0;

	while (strRev >= 0)
	{
		if (s[strRev] == '\0')
			break;
		strRev++;
	}

	for (strRev--; strRev >= 0; strRev--)
		_putchar(s[strRev]);
	_putchar('\n');
}
