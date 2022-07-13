#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: return 0 (Success)
 */
int main(void)
{
char y;
int x;

srand(time(0));
while (x <= 2645)
{
y = rand() % 128;
x += y;
putchar(y);
}
putchar(2772 - x);
return (0);
}
