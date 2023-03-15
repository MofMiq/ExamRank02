/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:07:45 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:29:28 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_last(char	*str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0 && (str[i] == 32 || str[i] == 9 || str[i] == '\0'))
		i--;
	while (i >= 0 && str[i] != 32 && str[i] != 9)
		i--;
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != 9)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_last(argv[1]);
	}
	write(1, "\n", 1);
}
