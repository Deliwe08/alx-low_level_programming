#include "main.h"

/**
 * _memcpy - copies n characters from memory area
 * @dest: pointer to the destination array
 * @src: source string
 * @n: number of characters
 * Return: 0 (Succes)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
