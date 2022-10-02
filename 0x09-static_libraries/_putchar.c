#include <unistd.h>

/**
 * _putchar - function to print string
 * @c: character
 * Return: void
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
