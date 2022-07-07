#include "main.h"
/**
 * _isdigit - Entry point
 * @n: integer
 * Return: return 1 if it is digit and 0 if not
 */
int _isdigit(int n)
{
if ((n >= 48) && (n <= 57))
{
	return (1);
}
return (0);
}
