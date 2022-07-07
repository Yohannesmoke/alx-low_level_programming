#include "main.h"
/**
* _isdigit -> this is a function that will
* @c: parameter
* measure the lower or upper
* Return: returns 1 when upper case and 0
* when lower case
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
