#include <stdio.h>

/**
*main -> this fun for printing name
* @argc: parameter
* @argv: parameter 2
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
