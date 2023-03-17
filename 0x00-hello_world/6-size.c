#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;


	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("size of int: %ld byte(s)\n", sizeof(int));
	printf("size of long int: %ld byte(s)\n", sizeof(float));
	printf("size of long long int: %ld byte(s)\n", sizeof(double));
	printf("size of float %ld byte(s)\n", sizeof(long long int));
	return (0);
}
