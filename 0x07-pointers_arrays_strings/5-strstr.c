#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *j;

	while (*haystack != '\0')
	{
		a = haystack;
		j = needle;

		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
