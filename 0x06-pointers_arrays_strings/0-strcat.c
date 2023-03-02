#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, j;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		j++;
	}

	dest[a] = '\0';
	return (dest);
}
