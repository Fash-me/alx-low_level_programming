#include "main.h"

/**
 * print_chessboard - Print chaseboard
 *@a: matrix
 */

void print_chessboard(char (*a)[8])
{
int i, j;

i = j = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}

}
