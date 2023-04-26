#include "main.h"
/**
 * print_binary - handle the conversion of an unsigned int to binary
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: the number of binary digit
 */

int print_binary(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned int n = va_arg(arguments, unsigned int);
unsigned int binary_digits[32];
int j, i = 0;
while (n > 0)
{
binary_digits[i] = n % 2;
n /= 2;
i++;
}
if (i == 0)
{
binary_digits[i] = 0;
i++;
}
for (j = i - 1; j >= 0; j--)
{
ibuf = handl_buffer(buf, binary_digits[j] + '0', ibuf);
}
return (i);
}
