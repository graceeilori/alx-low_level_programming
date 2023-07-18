#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * write - Writing the message to the standard error
 * Description: Printing
 * Return: Always 1 (Success)
 */
int main(void)
{
const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t length = strlen(message);
write(2, message, length);
return (1);
}

