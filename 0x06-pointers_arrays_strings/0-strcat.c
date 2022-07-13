#include "main.h"
/**
*_strcat-> will concatinate two strings
*@dest: destination
*@src:source of the string
*Return: will return concatinated sentence
*/
char *_strcat(char *dest, char *src)
{
int len1;
int len2;
len1 = strln(dest);
len2 = strln(src);
int i;
for (i = 0; i < len2; i++)
{
dest[len + i] = src[i];
}
printf("%s \n", dest);
}
