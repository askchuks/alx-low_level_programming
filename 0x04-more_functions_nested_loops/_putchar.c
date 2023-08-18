#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character cc to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * /
int_putchar(char c)
{
return (write(1, &c, 1));
}
