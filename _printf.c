#include "main.h"
/**
 * _printf - formatted output conversion and print data
 * @format: input string
 *
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
char c;
char *str;
int n;
char *buffer = malloc(BUFFER_SIZE);
int buf_pos = 0;

va_start(args, format);

if (!format || (format[0] == '%' && !format[1]))
return (-1);

if (!format[0])
return (0);

while (*format)
{
if (*format == '%')
{
format++;

switch (*format)
{
case 'c':
c = (char)va_arg(args, int);
buf_pos = print_char(c, buffer, &buf_pos, &count);
break;

case 's':
str = va_arg(args, char *);
buf_pos = print_str(str, buffer, &buf_pos, &count);
break;

case 'd':
case 'i':
n = va_arg(args, int);
buf_pos = print_int(n, buffer, &buf_pos, &count);
break;

case '%':
buf_pos = print_char('%', buffer, &buf_pos, &count);
break;
default:
break;
}
}

else
{
buf_pos = print_char(*format, buffer, &buf_pos, &count);
}

format++;
}

if (buf_pos > 0)
write(1, buffer, buf_pos);

free(buffer);
va_end(args);

return (count);
}
