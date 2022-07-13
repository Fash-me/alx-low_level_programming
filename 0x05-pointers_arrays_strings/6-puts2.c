#include "main.h"
/**
 * puts2 - Show the first number and other numbers
 * @str:: string
 * Return: return nill
 */
void puts2(char *str)
{
int n = 0;

while (str[n] != '\0')
{
	if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	n++;
}
_putchar('\n');
}
