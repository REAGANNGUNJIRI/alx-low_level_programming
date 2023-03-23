#include "main.h"

/**
 * _isdigit - Check if the characters are digits
 *@x: The character to be checked 
 *Return: 1 for the character that will be a digit 0 for anything else
 */

int _isdigit(int x)

{
	if (x >= 40 && x <= 57)
	{
	return (1);
	}
	return (0);
}
