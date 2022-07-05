#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (n < i && i < m)
				{
					putchar(n);
					putchar(i);
					putchar(m);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
