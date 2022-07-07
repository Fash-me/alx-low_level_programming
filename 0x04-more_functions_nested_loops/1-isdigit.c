#include "main.h"
/**
 * _isdigit - Entry point
 * @n: integer
 * Return: return 1 if it is digit and 0 if not
 */
int _isdigit(int n)
{
if ((n >= 0) && (n <= 9))
{
	return (1);
}
else
{
	return (0);
}
}
