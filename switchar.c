#include "main.h"

/**
 * switcher - selects the appropriate specifiers
 * @st: number of arguements
 * @args: length printed characters
 * Return: printed charcaters
 */
int switcher(t_list *st, const char *args)
{
	if(args[st->i] == 'c')
	{
		write(1, &format[st->i], 1);
		*i++;
		*len++;
	}
	else if(args[st->i] == 's')
		printf_str(va_arg(st->args,char *), 1, &st->ret, &st->i);
	else
		return(0);
}
