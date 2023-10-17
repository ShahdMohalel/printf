#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_func(char s))(va_list, flags_t *)
{
    int i, flags = 14;
    
	func_t func_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', print_int},
		{'d', print_int}
		};

	for (i = 0; i < flags; i++)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	}

	return (NULL);
}
