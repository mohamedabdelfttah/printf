#include "main.h"

/**
 * print_str - writes a string to the buffer
 * @buffer: the buffer to write the string to
 * @buf_pos: the current position in the buffer
 * @str: the string to write
 * Return: the updated buffer position
 */
int print_str(char *str, char *buffer, int *buf_pos, int *count)
{
int i;
for (i = 0; str[i]; i++)
{
buffer[(*buf_pos)++] = str[i];
if (*buf_pos == BUFFER_SIZE)
{
write(1, buffer, BUFFER_SIZE);
*buf_pos = 0;
}
}

*count += strlen(str);
return (*buf_pos);
}
