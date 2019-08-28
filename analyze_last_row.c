/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   analyze_last_row.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kstallen <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 16:03:04 by kstallen      #+#    #+#                 */
/*   Updated: 2019/08/25 16:03:06 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char    first_char_last_row(char *str, int y)
{
    int i;
    int count;
    
    i = 0;
    count = 1;
    while (count < y)
    {
        if (str[i] == '\n')
            count++;
        i++;
    }
    return(str [i]);
}

char    middle_char_last_row(char *str, int x, int y)
{
    int i;
    int count;
    char search;
    
    i = 0;
    count = 1;
    while (count < y)
    {
        if (str[i] == '\n')
            count++;
        i++;
    }
    search = (str [i + 1]);
    i++;
    while (x - 2 > 0)
    {
        if(str[i] != search)
           return ('x');
        i++;
        x--;
    }
    return (search);
}

char    last_char_last_row(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(str [i - 2]);
}
