#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes a character to stdout
 * @c: the character to be written
 *
 * Return: On success, return the character written. On error, return -1.
 */
int _putchar(char c)
{
    // Implement the function logic here
    // Use the 'c' parameter if needed

    return 0; // Add a return statement at the end
}
