#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to locate.
 *
 * Return: If the substring is found, return a pointer to the beginning of the
 *         substring; otherwise, return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n && (*h == *n))
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

