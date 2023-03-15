/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:24:29 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/07 15:51:25 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] >= 97 && argv[1][j] <= 122)
				argv[1][j] = 122 - argv[1][j] + 97;
			else if (argv[1][j] >= 65 && argv[1][j] <= 90)
				argv[1][j] = 90 - argv[1][j] + 65;
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
