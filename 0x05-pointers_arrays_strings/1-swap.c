#include "main.h"
/**
 * swap_int - swap the values of two intergers
 * @a: interger for swap
 * @b: interger for swap
 */

void swap_int(int *a, int *b)

{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
