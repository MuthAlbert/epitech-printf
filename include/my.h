/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdarg.h>

int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

// mini_printf
int my_printf(const char *format, ...);
int flags(const char *format, int i, va_list ap, int count);
int flags2(const char *format, int i, va_list ap);
int my_put_nbr_pos(unsigned int nb);
float my_put_nbr_float(double nb);

int base_hexa_x(unsigned int nb);
int my_put_nbr_hexa_x(unsigned int nb);

int base_hexa(unsigned long nb);
int my_put_nbr_hexa(unsigned int nb);

int base_octal(unsigned int nb);
int base_binary(unsigned int nb);
int base_s(char *str);
int base_s2(char *str, int i);
int base_p(void *nb);
int my_put_nb_base(int nb, char *base);

#endif /* !MY_H_ */
