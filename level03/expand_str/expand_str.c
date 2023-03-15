/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:32:04 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/15 19:18:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.*/

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
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
