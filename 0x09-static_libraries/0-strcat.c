#include "main.h"

/**
 *_strcat - concatenates  two strings
 *@dest: first string
 *@src: Second string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{

int i = 0, dest_length = 0;

while (dest[i++])
dest_length++;

for (i = 0; src[i]; i++)
dest[dest_length++] = src[i];

return (dest);
}
