#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: Input string.
 * @c: Character to find.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}

