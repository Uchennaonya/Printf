#include "main.h"

/*CODE FOR CALCULATING THE WIDTH OF PRINTING*/

/**
 * get_width - responsible for calculating  the width for printing
 * @i: consists of list of arguments to be printed.
 * @list:This involves  list of arguments.
 * @format: A formatted string to print  arguments.
 * Return:  It returns the width
 */
int get_width(const char *format, int *i, va_list list) /*Prototype used*/
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (width);
}

