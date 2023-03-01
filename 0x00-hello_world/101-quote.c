#include <unistd.h>
/**
 * main - Print without the stdio
 * Description: Not as easy, requires research
 * Return: 1 as described in the task break down
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
