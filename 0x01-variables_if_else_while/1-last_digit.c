#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
printf("Last digit of %d is ", n);
printf("%d ", l);
if (l < 6 && l != 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
if (l > 5)
{
printf("and is greater than 5\n");
}
else
{
printf("and is 0\n");
}
}
return (0);
}
