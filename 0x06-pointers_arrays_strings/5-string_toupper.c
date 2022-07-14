#include "main.h"

/**
*string_toupper - conver lowercase to uppercase
*@str: string
*Return: return str
*/

char *string_toupper(char *str)
{
int i = 0;

while (str[i++])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}

return (str);
}
