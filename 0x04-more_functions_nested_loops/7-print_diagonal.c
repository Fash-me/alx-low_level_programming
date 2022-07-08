#include "main.h"
/**
*print_diagonal - Entry point
*@n:parameter
*Return:return nothing
*/
void print_diagonal(int n)
{
int l, line;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (line = 0; line < l; line++)
_putchar(' ');

_putchar('\\');

if (l == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
