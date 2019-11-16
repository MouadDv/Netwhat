/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 01:26:29 by milmi             #+#    #+#             */
/*   Updated: 2019/11/16 01:26:32 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int get_mask(char *ip)
{
    int ret = 0;
    int i = 0;
    int k = 0;

    while (ip[i] != '\0' && ip[i] != '/')
        i++;
    if (ip[i] == '\0')
        return 0;
    i++;
    while (ip[i] != '\0')
    {
        if (ip[i] >= '0' && ip[i] <= '9')
        {
            k = ip[i] - 48;
            ret = k + ret * 10;
        }
        else
            return 0;
        i++;
    }
    return (ret);
}

int nw_cal(int  h)
{
    int j;
    int i;
    int ret = 0;

    j = 128;
    i = 0;
    while (j >= 1)
    {
        i = i + j;
        if (i > h)
            i = i - j;
        else
            ret++;
        j = j / 2;
    }
    if (i == h)
        return (ret);
    else
    {
        return 0;
    }
    
}

int main(int argc, char  **argv)
{
    int ret;
    int j = 0;

    if (argc == 1)
        printf("Usage: ./a.out 1 [IP/MASK]");
    else
        printf("%d", get_mask(argv[2]));
}