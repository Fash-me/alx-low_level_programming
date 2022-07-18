#include "main.h"
/**
 * _memcpy - copies n bytes from memory
 * area src to memory area dest
 * @dest: where the byte is copied to
 * @src: wher the byte is copied from
 * @n: byte
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
