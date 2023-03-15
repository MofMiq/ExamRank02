/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:28:13 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/21 17:29:03 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nb = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int	main(int argc, char **argv)
{
	int	mult = 1;
	int	res;
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (mult <= 9)
		{
			res = mult * n;
			ft_putnbr(mult);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			mult++;
		}
	}
	else
		write(1, "\n", 1);
}
