#include "main.h"
/**
 * 24_hours - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}