#include "main.h"

/**
 * print_int - writes an integer to the buffer
 * @buffer: the buffer to write the integer to
 * @buf_pos: the current position in the buffer
 * @num: the integer to write
 * Return: the updated buffer position
 */

int print_int(int n, char *buffer, int *buf_pos, int *count)
{
char *tmp_buffer = malloc(20 * sizeof(char));
int i,digits = 0;
int sign = n < 0 ? -1 : 1;
n *= sign;

while (n > 0)
{
tmp_buffer[digits++] = n % 10 + '0';
n /= 10;
}

if (sign == -1)
{
tmp_buffer[digits++] = '-';
}
for (i = digits - 1; i >= 0; i--)
{
buffer[(*buf_pos)++] = tmp_buffer[i];
if (*buf_pos == BUFFER_SIZE)
{
write(1, buffer, BUFFER_SIZE);
*buf_pos = 0;
}
}
free(tmp_buffer);
(*count) += digits;
return (*buf_pos);
}
