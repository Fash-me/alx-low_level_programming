#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 *@s: string
 * Return: return string length
 */
int _strlen(char *s)
{
int counter, string_length = 0;

for (counter = 0; s[counter] != '\0'; counter++)
{
	string_length++;
}
return (string_length);
}
