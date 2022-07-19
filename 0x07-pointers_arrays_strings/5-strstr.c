#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack. The terminating null
 * bytes (\0) are not compared
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: returns 0
 */
char *_strstr(char *haystack, char *needle)
{
char *result = haystack, *fneedle = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = fneedle;
result++;
haystack = result;
}
return (0);
}
