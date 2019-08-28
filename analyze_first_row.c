/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jramdara <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 16:49:20 by jramdara      #+#    #+#                 */
/*   Updated: 2019/08/25 11:25:15 by jramdara      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char    first_char_first_row(char *str)
{
    return (str[0]);
}

char    middle_char_first_row(char *str, int x)
{
    char search;
    int i;
    
    i = 1;
    x--;
    search = str[1];
    while (x - 2 > 0)
    {
        if(str[i] != search)
            return ('x');
        i++;
        x--;
    }
    return (str[1]);
}

char	last_char_first_row(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (str[i - 1]);
}


