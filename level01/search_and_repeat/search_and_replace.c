/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:37:10 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:27:42 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 4)
	{
		while (argv[1][j] != '\0' && !argv[2][1] && !argv[3][1])
		{
			if (argv[1][j] == argv[2][0])
				argv[1][j] = argv[3][0];
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
