#include "main.h"

/**
 * print_percent - function is used to handle the %% conversion
 * @arguments: variable argument list
 * @ibuf:  store a single % character
 * @buf: a buffer
 */
int print_percent(va_list arguments, char *buf, unsigned int ibuf)
{
(void)arguments;
handl_buffer(buf, '%', ibuf);
return (1);
}
