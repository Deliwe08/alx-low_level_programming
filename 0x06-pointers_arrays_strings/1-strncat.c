#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append
 * @src:string from which n characters are going to append
 * @n: represents a maximum number of characters to be appended
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
