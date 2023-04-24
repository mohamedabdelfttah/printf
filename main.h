#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

#endif
