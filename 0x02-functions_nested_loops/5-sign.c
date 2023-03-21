#include "main.h"
/**
 * print_sign - it prints the sign of a particular number
 * Return: 1 for positive no,-1 for negative number and 0 for anything else
 * @n: the no to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else 
	{
	_putchar(48);
	return (0);
	}
}
