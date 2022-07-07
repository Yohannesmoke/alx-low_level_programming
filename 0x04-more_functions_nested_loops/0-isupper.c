#include "main.h"
/**
*_isupper -> this is a function that will
*@c: parameter
*measure the lower or upper
*Return: returns 1 when upper case and 0
*when lower case
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
