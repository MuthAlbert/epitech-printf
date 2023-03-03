/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-albert.muth
** File description:
** my_put_nbr_float
*/

#include "../include/my.h"

float my_put_nbr_float(double nb)
{
    int j = nb;
    int i = (j % 10);
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
        return (0);
    }
    if (nb >= 10)
        my_put_nbr_float(nb / 10);
    my_put_nbr(j);
    my_putchar(nb + '0');
    return (0);
}
