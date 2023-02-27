#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: length of string
 */

int _strlen(char *s)
{
	int lengthS = 0;

	while (*s != '\0')
	{
		lengthS++;
		s++;
	}

	return (lengthS);
}
