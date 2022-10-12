#include <stdio.h>
#include "main.h"
/**
 * _memset - fills the first n bytes memory area
 * pointed to by @s with the constant byte @b
 * @n: Numbers of bytes to be filled 
 * @s: pointer to the memory to be filled
 * @b: charater to fill the memory with
 *
 * Return:A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
