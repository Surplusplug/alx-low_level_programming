#include "main.h"

/**
 * _memcpy - A function that copies a memory area.
 * @dest: Memory where the data is stored.
 * @src: Memory from where the data is copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
