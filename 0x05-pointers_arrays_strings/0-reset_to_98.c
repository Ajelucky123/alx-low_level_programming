#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - set the integer to 98
 * @n: a pointer the integer we want to set 98
 *
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
	printf("Value of 'n': %d\n", n);
	*n = 98;
}
/**
 * main - how to change the value of the variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
{
	int m;
	int *p;

	p = &m;
	m = 402;
	printf("Value of 'm' before the call: %d\n", m);
	reset_to_98(p);
	printf("Value of 'm' after the call: %d\n", m);
	return (0);
}

