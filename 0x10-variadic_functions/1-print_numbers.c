#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Function that prints numbers,
*followed by a new line.
*
* @separator: This is input separator
* @n: This is the input number
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pa;
unsigned int i;
va_start(pa, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pa, const unsigned int));
if (separator != NULL && i != (n - 1)
{
printf("%s", separator);
}
}
printf("\n");
}
