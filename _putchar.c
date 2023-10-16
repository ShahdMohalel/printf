#include "main.h"

/**
 * print_char - Prints a character
 * @any_char: char
 *
 * Return: The number of chars printed
 */

int print_char(char any_char)
{
	if(!any_char)
		return (false);
	write(1, &any_char, 1);

	return (1);
}
