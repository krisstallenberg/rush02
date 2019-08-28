/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   basic_functions.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kstallen <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 18:57:15 by kstallen      #+#    #+#                 */
/*   Updated: 2019/08/25 19:00:20 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb % 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
}
