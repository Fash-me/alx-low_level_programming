#include "main.h"
/**
 * print_rev - Print reverse string
 * @s: string
 * Return: return nil
 */
void print_rev(char *s)
{
int length, i;

length = _strlen(s);
for (i = length - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
