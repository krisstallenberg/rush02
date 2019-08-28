/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   analyze_middle_row.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: kstallen <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 21:01:56 by kstallen      #+#    #+#                 */
/*   Updated: 2019/08/25 21:37:57 by kstallen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char    char_middle_row(char *str, int x, int y)
{
    int h;
    int i;
    char result;
    
    i = 0;
    h = y;
    result = 0;
    while (y > 1)
    {
        if (str[i] == '\n')
        {
            if (i == x)
                result = str[i + 1];
            if (str[i + 1] != result && y > 2)
                return ('x');
            if (str[i - 1] != result && y < h)
                return ('x');
            y--;
        }
        i++;
    }
	return (result);
}
