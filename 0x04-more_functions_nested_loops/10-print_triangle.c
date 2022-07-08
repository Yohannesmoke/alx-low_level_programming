#include <stdio.h>
#include <stdlib.h>
/**
* main-> will print fizz when it is 
*3 divisible and buzz when 5 divisible
*fizzbuzz when both
*@n: parameter
* Return: 0 and 1
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
  if ((n % 3) == 0 && (n % 5) == 0)
{
printf("fizzbuzz");
}
else if ((n % 5) == 0)
{
printf("buzz");
}
else if ((n % 3) == 0)
{
printf("fizz");
}
else
printf("%d ", n);
if (n < 100)
{
printf(" ");
}
}
return (0);
}

