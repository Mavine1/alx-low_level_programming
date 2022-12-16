#include "main.h"

/*
 *
 * isdigit-function that verifies if a character is a digit
 * Return:returns 1 or otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
	return (1);
else
	return (0);
}
