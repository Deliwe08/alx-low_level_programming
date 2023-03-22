#include "main.h"

/**
 * Print sign - 'print the sign of a number'
 * Description: '@n is the needs to be checked'
 * Return: 1 if positive , -1 if negative or 0 otherwise
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
	_putchar(48);
	return (0);
}
