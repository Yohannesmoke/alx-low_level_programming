#include "main.h"
/**
*_strncat->will concatinate string
*if the n > j
*@dest:dstination string
*@src:source string
*@n:parameter
*Return:This function returns a pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
