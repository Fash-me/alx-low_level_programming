#include "main.h"
/**
 * _abs - Entry point.
 * @m: integer
 * Return: Always 0 (Success)
 */
int _abs(int m)
{
	if  (m > 0)
	{
		return (m);
	}
	else if (m < 0)
	{
		return (-m);
	}
	else
	{
		return (0);
	}
}
