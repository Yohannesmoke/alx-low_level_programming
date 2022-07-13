#include "main.h"
/**
*_strncpy-> copy the string
*@dest:destination
*@src:source the string gonna be copyed
*Return:copy file
*@n: parameter
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
