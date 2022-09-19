#include "main.h"

/**
 * reset_to_98 - resets value of pointer to 98
 * @n: pointer to reset to 98
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
<<<<<<< HEAD
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
}
=======
>>>>>>> 5c02575e8e1eae02cc6f9c3946fcd22aa195ec87
