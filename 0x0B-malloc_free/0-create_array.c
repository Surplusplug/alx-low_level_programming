#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size `size` and assign each element as `c`
 * @size: size of the array
 * @c: character to assign to each element
 *
 * Description: This function creates an array of size `size` and assigns each
 * element with the character `c`.
 *
 * Return: pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
