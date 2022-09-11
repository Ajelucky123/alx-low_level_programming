#include <stdio.h>
/**
 * main- entry point for the program.
 *
 * Return: 0 if success,non-zero if error.
 */
int main(void)
{
	printf("Size of a char: l%d byte(s)\n". sizeof(char));
	printf("Size of an int: l%d byte(s)\n", sizeof(int));
	printf("Size of a long int: l%d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
