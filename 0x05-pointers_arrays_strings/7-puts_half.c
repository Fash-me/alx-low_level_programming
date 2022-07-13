#include "main.h"
/**
*puts_half - print half string
*@str: string
*Return: return nill
*/
void puts_half(char *str)
{
int length = _strlen(str);

if (length % 2 == 0)
length = length / 2;

else
length = (length + 1) / 2;

while (str[length] != 0)
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}

/**
 *_strlen - Show string length
 * @s: string
 *Return: returns string lenght;
 */
int _strlen(char *s)
{
int counter, string_length;
string_length = 0;
for (counter = 0; s[counter] != 0; counter++)
string_length++;

return (string_length);
}
