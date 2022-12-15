#include "main.h"
/**
 * print- print alph 10 times
 */
void print_alphabet_x10(void)
{
	int m;
	char k;

	for (m = 0; m <= 9; m++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
