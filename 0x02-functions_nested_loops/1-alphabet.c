#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercase 
 *
 * Return: Always 0 (Success_).
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha ='a'; alpha <= 'z'; alpha++);
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
