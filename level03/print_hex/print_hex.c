/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:39:54 by hunter            #+#    #+#             */
/*   Updated: 2023/02/20 12:51:06 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_puthex(int nbr)
{
    if (nbr > 15)
    {
        ft_puthex(nbr / 16);
        ft_puthex(nbr % 16);
    }
    else
    {
        if (nbr < 10)
            ft_putchar(nbr + '0');
        else
            ft_putchar(nbr + 87);
    }
}

/*int ft_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;
    
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb * sign);
}*/

int ft_atoi_red(char *str)
{
    int nb = 0;
    
    while (*str)
    {
        nb = nb * 10;
        nb = nb + *str - '0';
        str++;
    }
    return (nb);
    
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_puthex(ft_atoi_red(argv[1]));
    write(1, "\n", 1);
}