#include "main.h"
/**
*rev_string - Reverse a string
*@s: String
*Return: return nill
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}

/**
 *_strlen - length of a string
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

/**
*swap_char - swap
*@a: first integer
*@b: second integer
*Return: return nill
*/

void swap_char(char *a, char *b)
{
char c = *a;
*a = *b;
*b = c;
}
