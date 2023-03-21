#include "main.h"


/**
 * _islower - checks for lowercase characters
 * Return: 1 for lowercase character 0r 0 for anything else
 * @c: The character that should be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
