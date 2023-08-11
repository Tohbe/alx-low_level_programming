#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The product of the two numbers as an integer.
 */
int multiply(char *num1, char *num2);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if the program completes successfully, 98 if there is an error.
 */
int main(int argc, char **argv)
{
    // Check the number of arguments
    if (argc != 3)
    {
        fprintf(stderr, "Error\n");
        return (98);
    }

    // Check that the arguments are composed only of digits
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < strlen(argv[i]); j++)
        {
            if (!isdigit(argv[i][j]))
            {
                fprintf(stderr, "Error\n");
                return (98);
            }
        }
    }

    // Multiply the two numbers and print the result
    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);

    return (0);
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The product of the two numbers as an integer.
 */
int multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));

    // Compute the product of each pair of digits
    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2;
            int pos1 = i + j;
            int pos2 = i + j + 1;
            int sum = product + result[pos2];
            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }

    // Convert the result to an integer
    int result_int = 0;
    for (int i = 0; i < len1 + len2; i++)
    {
        result_int *= 10;
        result_int += result[i];
    }

    // Free the memory
    free(result);

    return (result_int);
}



