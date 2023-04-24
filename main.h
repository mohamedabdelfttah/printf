#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int print_char(char c, char *buffer, int *buf_pos, int *count);
int print_str(char *str, char *buffer, int *buf_pos, int *count);
int print_int(int n, char *buffer, int *buf_pos, int *count);

#endif
