#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest:first string
 *@src:Second string
 *@n:integer, number of bytes
 *Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_length = 0;

while (dest[i++])
dest_length++;

for (i = 0; src[i] && i < n; i++)
dest[dest_length++] = src[i];

return (dest);
}
