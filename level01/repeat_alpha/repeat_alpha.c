/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:46:45 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:26:03 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	int	r;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j])
		{
			r = 1;
			if (argv[1][j] >= 97 && argv[1][j] <= 122)
				r += argv[1][j] - 97;
			if (argv[1][j] >= 65 && argv[1][j] <= 90)
				r += argv[1][j] - 65;
			while (r > 0)
			{
				write(1, &argv[1][j], 1);
				r--;
			}
			j++;
		}
	}
	write (1, "\n", 1);
}
