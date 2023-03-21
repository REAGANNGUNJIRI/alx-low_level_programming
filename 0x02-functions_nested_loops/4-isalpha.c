#include "main.h"
/**
 * _isalpha - checks for any alphabetic character
 * @c: The character that should be checked
 * Return: 1 for any alphabetic character and 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
