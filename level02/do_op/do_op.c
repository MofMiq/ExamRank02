/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:07:52 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/08 12:27:50 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1] + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
