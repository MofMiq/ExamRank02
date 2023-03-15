/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:05:25 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/06 12:25:58 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
We use the variable 'j' to simply traverse the string
"start" is used to keep the position of the beginning of a word within the string
"end" is used to keep the position of the end of a word within the string
"word" is a boolean index to know if we should put a space in the middle
of two words, and to control the "first/last" space of the string (word != 0)
*/

int	main(int argc, char **argv)
{
	int	j = 0;
	int	start;
	int	end;
	int	word;

	if (argc == 2)
	{
		while (argv[1][j] != '\0')
			j++;
		while (j >= 0)
		{
			while (argv[1][j] == '\0' || argv[1][j] == 32 || argv[1][j] == '\t')
				j--;
			end = j;
			while (argv[1][j] != '\0' && argv[1][j] != 32 && argv[1][j] != '\t')
				j--;
			start = j + 1;
			word = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (word != 0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}
