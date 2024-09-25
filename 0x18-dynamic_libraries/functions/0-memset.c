#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: with the constant byte
 * @b: memory area pointer
 * @n: bytes of the memory are pointed to
 * Return: a pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

