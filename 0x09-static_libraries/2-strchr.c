#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * character is not found
 * @s: string
 * @c: character
 * Return: returns NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
