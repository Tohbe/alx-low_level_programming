#include <stdio.h>
/**
 * main - Prints the different sizes of data types
 * Description: Print the sizes of various types
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	/* Prints the sizes of various types */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int:");
	printf(" %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
