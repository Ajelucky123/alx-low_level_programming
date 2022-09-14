#include "main.h"
/**
 * _isalpha - this program will  checks for alphabetic character
 * @c: character to check for 
 * Return:Returns 1 if c is a letter, lowercase or uppercase otherwise return 0.
 */
int _isalpha(int c)

{
	if  (((c <='a') && (c >='z') || (c <='Z') && (c >='Z')))

		return (1);
	else 
		return (0);
}

