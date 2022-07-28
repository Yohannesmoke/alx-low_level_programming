#include "main.h"
#include <stdlib.h>

/**
* malloc_checked -> this function will allocate
* memory by default
* @b: parameter 1
* Return: returns allocated memory or if it fails
* it returns the value 98
*/
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
exit(98);
return (m);
}
