/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zabbas <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 18:38:34 by zabbas        #+#    #+#                 */
/*   Updated: 2019/08/24 18:38:35 by zabbas        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int* count_xy(char *str)
{
    int height = 0;
    int i = 0;
    int len = 0;
    int *array;
	array = malloc(sizeof(int) * 2);
    
    while (str[i] != '\n')
    {
        i++;
        len = i;
    }
    while (str[i] != '\0')
    {
        if ( str[i] == '\n')
        {
            height++;
        }
        i++;
    }
    array[0] = len;
    array[1] = height;
    return (array);
}
