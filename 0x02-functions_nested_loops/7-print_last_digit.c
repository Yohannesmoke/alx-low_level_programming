#include "main.h"
/**
* print_last_digit -> will print last line of a digit
* @n: parameter
* Return: return value
*/
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
