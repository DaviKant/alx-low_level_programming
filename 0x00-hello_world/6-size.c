#include <stdio.h>


/**
 * main - prints the size of various types based on the computer
 * and run on ..
 * Return: Always 0.
 */


int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Sise of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
