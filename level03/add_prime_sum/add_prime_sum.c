/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:14:46 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/06 15:10:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnb(int nb)
{
	if (nb > 9)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nb = 0;
	int	sign = 1;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	is_prime(int num)
{
	int	i;

	i = 3; //start at 3 because is the odd first prime number. All prime numbers are odd except 2.
	if (num <= 1) //we remove 1 because the subject say so
		return (0);
	if (num % 2 == 0 && num > 2) //we remove all even numbers and consider number 2 as a special case because it's the only even prime number
		return (0);
	while (i < (num / 2)) //the num / 2 is for optimization
	{
		if (num % i == 0)
			return (0);
		i += 2; //we add 2 by 2 to make sure the the number is odd, whether it's prime or not
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	nb;

	sum = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]); //We initialize within the if statement because if we don't, when an invalid argument is passed through the console, it causes a segmentation fault
		while (nb > 0)
		{
			if (is_prime(nb))
				sum = sum + nb;
			nb--;
		}
		ft_putnb(sum);
	}
	else
		ft_putchar('0');
	write(1, "\n", 1);
}
