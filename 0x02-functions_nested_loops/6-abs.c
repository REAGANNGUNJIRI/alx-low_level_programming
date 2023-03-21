#include "main.h"
/**
 * _abs - it computes the absolute value of an interger
 * @c: The number character to be computed
 * Return: absolute value of number or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
