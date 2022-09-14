#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
<<<<<<< HEAD
 * Return: x10 a-z 
=======
 * Return: x10 a-z
>>>>>>> 1812c07fe642c5a947193202dffa142f67042d32
 */
void print_alphabet_x10(void)
{
	char alpha, co;

	co = 0;

<<<<<<< HEAD
	while  (co < 10)


	{
		for  (alpha = 'a'; alpha <= 'z'; alpha++;);

		{
			_putchar (alpha);
		}

		co++;

=======
	while (co < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		co++;
>>>>>>> 1812c07fe642c5a947193202dffa142f67042d32
		_putchar('\n');
	}
}
