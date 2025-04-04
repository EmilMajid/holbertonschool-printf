#include "main.h"
#include <stdarg.h>
/**
 * _printf - this is mini version of ptintf(3) function
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{


	int i = 0;
	unsigned int len = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			len += _putchar(va_arg(args, int)), i += 2;

		else if (format[i] == '%' && format[i + 1] == 's')
			len += print_string(va_arg(args, char *)), i += 2;

		else if (format[i] == '%' && format[i + 1] == '%')
			len += _putchar('%'), i += 2;

		else if (format[i] == '%' && format[i + 1] == '\0')
			len--, i++;

		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
			len += print_number(va_arg(args, int)), i += 2;

		else
			len += _putchar(format[i]), i++;
	}
	va_end(args);
	return (len);
}
