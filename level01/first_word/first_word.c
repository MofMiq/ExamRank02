/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:46:53 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 15:24:01 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] == 32 || argv[1][j] == 9)
			j++;
		while (argv[1][j] != 32 && argv[1][j] != 9 && argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
