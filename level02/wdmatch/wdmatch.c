/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:27:54 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:23:44 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1); 
	}
}

int	main(int argc, char **argv)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[2][k] != '\0')
		{
			if (argv[1][j] == argv[2][k])
				j++;
			k++;
		}
		if (argv[1][j] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
