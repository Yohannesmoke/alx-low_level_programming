#include "main.h"
/**
*print_line -> print number from 1 to 9
*@n: parameter
*Return:return 0 and 1
*/
void print_line(int n)
{
int i;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
_putchar(95);
}
_putchar('\n');
}
