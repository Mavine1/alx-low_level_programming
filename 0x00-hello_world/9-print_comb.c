#include <stdioh.h>
#include <stdlib.h>
/**
 * main -main block
 * Description : prints all single  number of base 10
 * starting from 0,followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	return (0);
}
