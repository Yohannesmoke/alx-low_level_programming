#include "main.h"
/**
*print_sign -> will print values
* @n: the character to be checed
*Return: will return 0,1,-1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
