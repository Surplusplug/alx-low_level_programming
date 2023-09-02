#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /* check if str contains digits */
		{
			return (0);
		}
		count++;
	}

	return (1);
}

/**
 * main - Print the sum of command line arguments that are numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /* Goes through the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
			sum += str_to_int;
		}
		else
		{
			/* Condition if one of the numbers contains symbols that are not digits */
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* Print sum */

	return (0);
}
