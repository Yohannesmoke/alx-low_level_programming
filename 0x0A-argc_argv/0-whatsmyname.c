#include <stdio.h>

/**
*main -> this fun for printing name
* @argc: parameter
* @argv: parameter 2
* Return: 0 for success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
