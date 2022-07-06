#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int n, multiplier;

multiplier = 0;

while (multiplier++ <= 9)
{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

}
