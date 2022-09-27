#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies the n bytes from the memory area @src to area memory @dest
 * @n: Numbers of bytes copy from memory @src
 * @src: Memory area to be copied from
 * @dest: Memory area to be copied to
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *target = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		target[index] = source[index];

	return (dest);
}

