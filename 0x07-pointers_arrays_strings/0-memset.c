#include "main.h"
/**
 * _memset - fills the first n bytes
 * f the memory area pointed to by
 * s with the constant byte b
 * @s: pointer
 * @b: byte
 * @n: byte
 * Return: returns pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
return (s);
}
