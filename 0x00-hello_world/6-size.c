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
	float f;
	long int c;
	long long int d;


	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("size of int: %ld byte(s)\n", sizeof(int));
	printf("size of float: %ld byte(s)\n", sizeof(float));
	printf("size of double: %ld byte(s)\n", sizeof(double));
	printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
	return (0);
}
