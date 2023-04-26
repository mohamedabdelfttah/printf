#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define NULL_STRING "(null)"
#define NUL '\0'

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
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot13(va_list arguments, char *buf, unsigned int ibuf);
#endif
