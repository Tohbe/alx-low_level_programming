#include <stdio.h>

/**
 * main - Alphabets print is fun
 * Description: Printing char alphabets
 * Return: 0 if successful
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
