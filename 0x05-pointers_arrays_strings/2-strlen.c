#include "main.h"
#include <string.h>
/**
* _strlen -> return length of string
* @s: parameter 1
* Return: vale of the char
*/
int _strlen(char *s)
{
int len;
for (s = 0; *s != '\0'; s++)
{
len += 1;
}
return (len);
}
