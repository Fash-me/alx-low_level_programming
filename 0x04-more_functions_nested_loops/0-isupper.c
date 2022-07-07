#include "main.h"
/**
*_isupper -Entry point
*@c:character
*Return: returns 1 uppercase , 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
