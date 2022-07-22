#include <stdio.h>

/**
*main -> this fun for printing name
* @argc: parameter
* @argv: parameter 2
* Return: 0 for success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
