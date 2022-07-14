#include "main.h"
/**
*  _strncpy - Function that copy another string.
*@dest: buffer where the string is stored
*@src:Where the string is copied from.
*@n:nummber of byte
*Return: returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != 0; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = 0;

return (dest);
}
