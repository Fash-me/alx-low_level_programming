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
/**
 * _strlen - A function that returns the length of a string
 *@s: string
 * Return: return string length
 */
int _strlen(char *s)
{
int counter, string_length = 0;

for (counter = 0; s[counter] != 0; counter++)
{
string_length++;
}
return (string_length);
}
