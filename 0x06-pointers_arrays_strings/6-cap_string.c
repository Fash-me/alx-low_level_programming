#include "main.h"
/**
 *cap_string - Capitalize the first character of a string
 *@str: string
 *Return:return str
 */
char *cap_string(char *str)
{
int i = 0;
while (str[++i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;

if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}')
str[i] -= 32;
}
return (str);
}
