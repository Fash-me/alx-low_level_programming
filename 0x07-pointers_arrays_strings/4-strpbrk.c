#include "main.h"
/**
 * _strpbrk - ocates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string
 * @accept: byte container
 * Return: retunrs NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
