#include "main.h"

/**
 * get_print - selects the right printing function
 * @s: character that holds the conversion specifier
 * Return: a pointer to the matching printing function
 */
int (*get_func(char s))(va_list, flags_t *)
{
    int i, flags = 14;

	func_t func_arr[] = {
		{'s', print_str},
		{'c', print_char}
		};

	for (i = 0; i < flags; i++)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	}

	return (NULL);
}
