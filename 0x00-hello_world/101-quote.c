#include <stdio.h>
/**
 * main - Entry point
 * write - Write content
 * Description: Printing
 * Return: Always 1 (Success)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 60);
return (1);
}
