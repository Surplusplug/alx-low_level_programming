#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		result = -1;
	else if (y == 0)
		result = 1;
	else
		result = x * _pow_recursion(x, y - 1);
	return (result);
}
