#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _printf_char(unsigned int *a, char b);
int _printf(const char *format, ...){
    
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
	}
	va_end(ptr);
}
int _printf_char(unsigned int *a, char b)
{
	if (!b && b != '\0')
	{
		write(1, "(null)", 6);
		*a += 6;
	}
	else
	{
		write(1, &b, 1);
		(*a)++;
	}
return (*a);
}

void main(void)
{
    _printf("Character:[%c]\n", 'H');
}


