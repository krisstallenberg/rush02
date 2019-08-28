/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kstallen <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 12:21:07 by kstallen      #+#    #+#                 */
/*   Updated: 2019/08/25 18:56:01 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER
#define HEADER

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 4096

typedef struct  s_data
{
    int *xy;
    char fcfr;
    char mcfr;
    char lcfr;
    char cmr;
    char fclr;
    char mclr;
    char lclr;
}               t_data;

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void    gather_data(char *str);
void    analyze(t_data *data);
int*	count_xy(char *str);
char    first_char_first_row(char *str);
char	middle_char_first_row(char *str, int x);
char	last_char_first_row(char *str);
char    char_middle_row(char *str, int x, int y);
char    first_char_last_row(char *str, int y);
char    middle_char_last_row(char *str, int x, int y);
char    last_char_last_row(char *str);



#endif
