/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:23:50 by hunter            #+#    #+#             */
/*   Updated: 2023/02/22 11:59:09 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

int main(int argc, char **argv)
{
    (void) argv;
    ft_putnbr(argc - 1);
    write(1, "\n", 1);
}