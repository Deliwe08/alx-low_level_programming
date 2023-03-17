#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("size of int: %ld bytes\n", sizeof(int));
	printf("size of float: %ld bytes\n", sizeof(float));
	printf("size of long int: %ld bytes\n", sizeof(long int));
	printf("size of double: %ld bytes\n", sizeof(double));
	printf("size of long long int: %ld bytes\n", sizeof(long long int));
	return (0);
}
