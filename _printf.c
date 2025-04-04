#include "main.h"
int _printf(const char *format, ...)
{
	unsigned int i, k = 0;
	va_list ptr;
	va_start(ptr, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if(format[i]=='%'&&format[i+1]=='c')
		{
			k = _printf_char(&k, va_arg(ptr, int));
			i++;
		}
		else if(format[i]=='%'&&format[i+1]=='s')
		{
			k = _printf_char(&k, va_arg(ptr, int));
			i++;
		}
		else if(format[i]=='%'&&format[i+1]=='d'&&format[i+1]=='i')
		{
			k = _printf_char(&k, va_arg(ptr, int));
			i++;
		}
		else if(format[i]=='%'&&format[i+1]=='%')
		{
			_putchar('%');
			i++;
		}
		else
		{
			write(1, &format[i], 1), k++;
		}
	}
	va_end(ptr);
return(0);
}