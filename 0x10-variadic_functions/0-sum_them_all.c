#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.c>

/**
* sum_them_all - function that returns the sum of all its parameters.
*
* @n: The number of items
*
* Return: Returns the sum of all its parameters.
*         If n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list pa;
va_start(pa, n);
int i, sum = 0;
for (i = 0; i < n; i++)
{
sum = va_arg(pa, int);
}
va_end(pa);
return (sum);
}
