/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:43:57 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:27:47 by marirodr         ###   ########.fr       */
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
				argv[1][j] -= 32;
			else if (argv[1][j] >= 65 && argv[1][j] <= 90)
				argv[1][j] += 32;
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
