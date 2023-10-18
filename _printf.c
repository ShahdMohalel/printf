#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
int len;
conver_t f_list[] = {
{"%", print_percent},
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"d", print_integer},
{"b", print_binary},
{"o", print_oct},
{"u", print_un},
{"S", _sprintf},
{"x", print_lh},
{"X", print_uh},
		{"+", plus},
		{"R", print_rot13},
		{"r", rev},
		{" ", space},
		{"p", print_ptr},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	len = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (len);
}
