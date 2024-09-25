#include "main.h"

/**
 * _memcpy - function that copies @n bytes from memory are @src.
 * to memory area @dest
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
