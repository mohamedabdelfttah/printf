#include "main.h"

/**
 * print_char - prints character
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: number chars printed
*/
int print_char(va_list ap, params_t *params)
{       
        char pad_char = ' ';
        unsigned int pad = 1, sum = 0, ch = va_arg(ap, int);
        
        if (params->minus_flag)
                sum += _putchar(ch);
        while (pad++ < params->width)
                sum += _putchar(pad_char);
        if (!params->minus_flag)
                sum += _putchar(ch);
        return (sum);
}       

/**
 * print_char - prints character
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: number chars printed
*/
int print_int(va_list ap, params_t *params)
{       
        long l;

	if (params->l_modifier)
		l = va_arg(ap, long);
	else if (params->h_modifier)
		l = (short int)va_arg(ap, int);
	else
		l = (int)va_arg(ap, int);
	return (print_number(convert(l, 10, 0, params), params));


