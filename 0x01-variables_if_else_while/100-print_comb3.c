#include <stdio.h>
/**
 *  main -main block
 *  description : write a program that prints all the possible numbers
 *
 *  Return: Always 0;
 */
int main(void)
{
	int m;
	int k;

	for (m = 0; m <= 9; m++)
	{
		for (k = m + 1; k <= 9; k++)
		{
			putchar(m + '0');
                        putchar(k + '0');
			if (m < 8)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
