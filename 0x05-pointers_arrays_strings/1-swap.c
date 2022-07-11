#include "main.h"
/**
* swap_int -> wil swap the value of two integers
* @a: parameter 1
* @b: parameter 2
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
