 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:02:13 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/02 12:26:47 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*Check if there are matching characters in the resulting string from combining
both arguments: 0 means there is a match, therefore we do not print; 1 means 
there is no match, therefore we print (in int main)*/

int	ft_checker(char	*str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	j = 0;
	int	k = 0;
	int	l = 0;

	if (argc == 3)
	{
		while (argv[1][j] != '\0')
			j++;
		while (argv[2][k] != '\0')
		{
			argv[1][j] = argv[2][k];
			j++;
			k++;
		}
		j--;
		while (l <= j)
		{
			if (ft_checker(argv[1], argv[1][l], l) == 1)
				write(1, &argv[1][l], 1);
			l++;
		}
	}
	write(1, "\n", 1);
}
