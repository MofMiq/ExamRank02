/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:58:21 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:30:05 by marirodr         ###   ########.fr       */
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
			if (argv[1][j] == '_')
			{
				j++;
				argv[1][j] = argv[1][j] - 32;
			}
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
