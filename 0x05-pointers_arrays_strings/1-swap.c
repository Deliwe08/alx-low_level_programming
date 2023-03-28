#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
