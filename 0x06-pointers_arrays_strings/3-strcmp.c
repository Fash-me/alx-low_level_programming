#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 * Return: returns com
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, com = 0;

while (1)
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
com = s2[i];
break;
}
else if (s2[i] == '\0')
{
com = s1[i];
break;
}
else if (s1[i] != s2[i])
{
com = s1[i] - s2[i];
break;
}
else
i++;

}
return (com);
}
