#include "main.h"
/**
 * get_printf - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_printf(const char *s, int index))(va_list, char *, unsigned int)
{
print_t pr[] = {
{"c", print_char}, {"s", print_str},
{"i", print_int}, {"d", print_int},
{"b", print_binary}, {"%", print_percent},
{NULL, NULL},
};
int i = 0, j = 0, first_index;

first_index = index;
while (pr[i].type_arg)
{
if (s[index] == pr[i].type_arg[j])
{
if (pr[i].type_arg[j + 1] != '\0')
index++, j++;
else
break;
}
else
{
j = 0;
i++;
index = first_index;
}
}
return (pr[i].f);
}
