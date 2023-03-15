/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:21:43 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/15 14:41:21 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.*/

int	main(int argc, char **argv)
{
	int	j;
	int	space;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] == 32 || argv[1][j] == '\t')
			j++;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] == 32 || argv[1][j] == '\t')
				space = 1;
			if (!(argv[1][j] == 32 || argv[1][j] == '\t'))
			{
				if (space == 1)
					write(1, " ", 1);
				space = 0;
				write (1, &argv[1][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}