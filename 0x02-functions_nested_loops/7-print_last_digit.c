#include "main.h"
/**
* print_last_digit -> will print last line of a digit
* @n: parameter
* Return: return value
*/
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
