#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Printing a text but using system calls'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}
