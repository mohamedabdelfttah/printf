#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct parameters - parameters struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @zero_flag: on if _flag specified
 * @minus_flag: on if _flag specified
 *
 * @width: field width specified
 * @precision: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */
typedef struct parameters
{
	unsigned int unsign			: 1;

	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;
} params_t;


/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
char *type_arg;
int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int ev_printf(const char *s, int index);
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);
int (*get_printf(const char *s, int index))(va_list, char *, unsigned int);
int print_percent(va_list arguments, char *buf, unsigned int ibuf);
int print_binary(va_list arguments, char *buf, unsigned int ibuf);
char *binary_array(char *binary, long int int_in, int isneg, int limit);
char *hexa_array(char *bnr, char *hex, int isupp, int limit);
char *octal_array(char *bnr, char *oct);
int print_octal(va_list arguments, char *buf, unsigned int ibuf);
int print_hexa(va_list arguments, char *buf, unsigned int ibuf);
int print_upX(va_list arguments, char *buf, unsigned int ibuf);
int print_unit(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, params_t *params);
int print_rot13(va_list arguments, params_t *params);
#endif
