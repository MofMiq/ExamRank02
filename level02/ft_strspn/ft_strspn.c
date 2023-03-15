/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:28:36 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:28:56 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

/*
From the beginning, if they don't match from s[0], we terminate. Strspn searches
for matches between both strings regardless of the order of occurrence and how
many times they repeat. For example, s1: Hola 889 /// s2: Hola xx89, the result
will be 8 because although there is only one 8 in s2, there are two in s1, so it
counts both, and it doesn't matter if there are different characters in front. 
You compare from *accept, so if accept is shorter than s, it will not actually 
reach the end of s. You compare each character of *accept with only one position
of *s
*/

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break ;
			j++;
		}
		if (!accept[j]) // At the moment there is a char in *s that does not appear in *accept, it stops comparing. Therefore, if j reaches the end without finding a match, we terminate and return i
			return (i);
		i++;
	}
	return (i);
}

/*int	main()
{
	char	s[25] = "Hola 889";
	char	accept[25] = "Hola xxx89";

	printf("%lu\n", strspn(s, accept));
	printf("%lu\n",ft_strspn(s, accept));
}*/
