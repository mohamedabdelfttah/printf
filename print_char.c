#include "main.h"
#include <stdio.h>

/**
 * print_char - writes a single character to the buffer
 * @buffer: the buffer to write the character to
 * @buf_pos: the current position in the buffer
 * @c: the character to write
 * Return: the updated buffer position
 */
int print_char(char c, char *buffer, int *buf_pos, int *count)
{
buffer[(*buf_pos)++] = c;

if (*buf_pos == BUFFER_SIZE)
{
write(1, buffer, BUFFER_SIZE);
*buf_pos = 0;
}

(*count)++;
return (*buf_pos);
}
