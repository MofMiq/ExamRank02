/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:18:49 by hunter            #+#    #+#             */
/*   Updated: 2023/02/21 17:27:55 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_str_capi(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == 32 || str[i - 1] == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc <= 1)
		write(1, "\n", 1);
	else
	{
		while (n < argc)
		{
			ft_str_capi(argv[n]);
			write(1, "\n", 1);
			n++;
		}
	}
}

/*int main()
{
    char str[50] = "__SecONd teST A LITtle BiT   Moar comPLEX""   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t";
    char str1[50] = "a FiRSt LiTTlE TESt";

    ft_str_capi(str);
}*/
