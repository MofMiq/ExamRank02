/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:35:39 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/08 16:13:18 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*i < len = while we use it to iterate through argv[1] and search for unwanted
repetitions.
len == -1 = is a necessary condition for it to enter when we are comparing both
arguments.
1 means match; 0 means error. Therefore, when we use them in the main function,
we look for matching errors within argv[1], but between the two arguments, we 
look for success*/

int	iter(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*Basically, !iter is the condition to avoid character matches within argv[1].
On the other hand, iter = -1 forces an "impossible" condition to enter and thus
search for a match between the two arguments*/

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 3)
	{
		while (argv[1][j] != '\0')
		{
			if (!iter(argv[1], argv[1][j], j) && iter(argv[2], argv[1][j], -1))
				write(1, &argv[1][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
}
