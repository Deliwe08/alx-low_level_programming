#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: is the digit to be checked
 * Return: 1 if the character is a digit or 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
