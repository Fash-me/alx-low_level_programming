#include "main.h"
/**
 *cap_string- converts Initial lowercase to uppercase
 *@str: string
 *Return: return str
 */
char *cap_string(char *str)
{
	int i, j, s;

	s = 1;

	for (i = 0; str[i]; ++i)
	{
		if (s && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -  32;
		}
		s = 0;
		for (j = 0; j < 12; j++)
		{
			if (str[i] == '\t' || str[i] == '\n' || str[i] == ','
					|| str[i] == '\"' || str[i] == '.' || str[i] == '!' ||
					str[i] == '{' || str[i] == '}' || str[i] == '(' ||
					str[i] == ')' || str[i] == ' ' || str[i] == '?')
			{
				s = 1;
			}
		}
	}
	return (str);
}
