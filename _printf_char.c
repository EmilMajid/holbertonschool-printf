#include "main.h"
int _printf_char(unsigned int *a, char b)
{
    write(1, &b, 1);
    (*a)++;
    
    return (*a);
}