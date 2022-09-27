#include <stdio.h>
#include "main.h"
/**
 * _strchr - Locate a character @c in a string @s
 * @c: First occurrence of character to be located
 * @s: Location of where the character to be searched
 *
 * Return:  a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int index;
	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
