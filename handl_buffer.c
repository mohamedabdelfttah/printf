#include "main.h"

/**
 * handl_buffer - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf)
{
if (ibuf == 1024)
{
print_buffer(buf, ibuf);
ibuf = 0;
}
buf[ibuf] = c;
ibuf++;
return (ibuf);
}
