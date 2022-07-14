#include "main.h"
/**
 *rot13- rotate  letters 13 wise
 *@str: string
 *Return: return str
 */
char *rot13(char *str)
{

int i, j;

char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";


for (i = 0; *(str + i); i++)
{
for (j = 0; j < 52; j++)
{
if (src[j] == *(str + i))
{
*(str + i) = dest[j];
break;
}
}
}
return (str);
}
