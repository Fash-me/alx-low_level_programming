#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, m, j;

	for (n = 48; n <= 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((m + j)  > (n + i) && m >= n) || n < m)
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						putchar(m);
						putchar(j);
					if (n + i + m + j == 227 && n == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
