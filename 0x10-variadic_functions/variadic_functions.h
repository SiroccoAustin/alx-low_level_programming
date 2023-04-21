#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

/**
 * struct func - struct
 * @s: string
 * @f: pointer to function
 */
typedef struct func
{
        char *s;
	void (*f)(va_list list);
} func_t;

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VAR_H*/
