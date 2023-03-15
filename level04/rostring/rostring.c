/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:40:01 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/01 12:13:36 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_space(char c)
{
	if (c == 32 || c == '\t')
		return (1);
	return (0);
}

/*we put two indices - start and end respectively- at the beggining and end of
the fisrt "word" of the string, and we save their positions for later. Then we
begin a while loop to print the remaingin string, with the peculiar condition
of manually writing only a space to separate each word. Finally, when we
reach the end of the string (with j), we enter another while loop to print
the "first word", using both, start and end, indices*/

int	main(int argc, char **argv)
{
	int	j;
	int	start;
	int	end;

	j = 0;
	if (argc >= 2)
	{
		while (argv[1][j] != '\0' && is_space(argv[1][j]))
			j++;
		start = j;
		while (argv[1][j] != '\0' && !is_space(argv[1][j]))
			j++;
		end = j;
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] != '\0' && !is_space(argv[1][j]) && is_space(argv[1][j - 1]))
			{
				while (argv[1][j] != '\0' && !is_space(argv[1][j]))
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				write(1, " ", 1);
			}
			j++;
		}
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}