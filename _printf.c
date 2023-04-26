#include "main.h"
#include "header.h"
/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, len = 0, ibuf = 0;
va_list arguments;
int (*function)(va_list, char *, unsigned int);
char *buffer;

va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{	print_buffer(buffer, ibuf), free(buffer), va_end(arguments);
return (-1);
}
else
{	function = get_printf(format, i + 1);
if (function == NULL)
{
if (format[i + 1] == ' ' && !format[i + 2])
return (-1);
handl_buffer(buffer, format[i], ibuf), len++, i--;
}
else
{
len += function(arguments, buffer, ibuf);
i += ev_printf(format, i + 1);
}
} i++;
}
else
handl_buffer(buffer, format[i], ibuf), len++;
for (ibuf = len; ibuf > 1024; ibuf -= 1024)
;
}
print_buffer(buffer, ibuf), free(buffer), va_end(arguments);

for (p = (char *)format; *p; p++)
	{
		init_params(&params, ap);
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		while (get_flag(p, &params)) /* while char at p is flag char */
		{
			p++; /* next char */
		}
		p = get_width(p, &params, ap);
		p = get_precision(p, &params, ap);
		if (get_modifier(p, &params))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p,
				params.l_modifier || params.h_modifier ? p - 1 : 0);
		else
			sum += get_print_func(p, ap, &params);
	}

return (len);
}
