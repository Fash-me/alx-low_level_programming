#include "main.h"
/**
 * swap_int - A function that will swap the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: nil
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
