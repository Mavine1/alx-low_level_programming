#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character of c
 *
 * Return: 0
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
