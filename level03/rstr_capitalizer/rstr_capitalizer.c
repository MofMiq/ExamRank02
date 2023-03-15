/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:15:36 by marirodr          #+#    #+#             */
/*   Updated: 2023/02/21 17:18:42 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rstr_capi(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == 32 || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc <= 1)
		write(1, "\n", 1);
	else
	{
		while (n < argc)
		{
			ft_rstr_capi(argv[n]);
			write(1, "\n", 1);
			n++;
		}
	}
}
