#include "main.h"
/**
 * _strspn - Returns the number of bytes in the
 * initial segment of s which consist only of
 * bytes from accept
 * @s: Segment
 * @accept: reference
 * Return: return bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
c++;
break;
}
else if ((accept[i + 1]) == '\0')
return (c);
}
s++;
}
return (c);
}
