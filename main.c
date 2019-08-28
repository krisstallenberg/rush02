/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kstallen <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 15:10:53 by kstallen      #+#    #+#                 */
/*   Updated: 2019/08/25 11:32:36 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void gather_data(char *str)
{
    t_data *data;
    
    data = (t_data*)malloc(sizeof(t_data));
    
    data->xy = count_xy(str);
    data->fcfr = first_char_first_row(str);
    data->mcfr = middle_char_first_row(str, data->xy[0]);
    data->lcfr = last_char_first_row(str);
    data->cmr = char_middle_row(str, data->xy[0], data->xy[1]);
    data->fclr = first_char_last_row(str, data->xy[1]);
    data->mclr = middle_char_last_row(str, data->xy[0], data->xy[1]);
    data->lclr = last_char_last_row(str);
    analyze(data);
}

void    analyze(t_data *data)
{
    if(data->fcfr == '/') 
        ft_putstr("Seems to be rush 01!");
    ft_putstr(" [");
    ft_putnbr(data->xy[0]);
    ft_putstr("] [");
    ft_putnbr(data->xy[1]);
    ft_putstr("]");
}

int	main(void)
{
    char    *str;
    char    c;
    int     i;
    int     reader;
    
    i = 0;
    str = (char*)malloc(sizeof(char));
    while ((reader = read(0, &c, 1)))
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    ft_putstr(str);
    gather_data(str);
    return(0);
}
