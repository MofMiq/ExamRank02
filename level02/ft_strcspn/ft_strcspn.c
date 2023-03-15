/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:25:08 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:27:32 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

/*
strcspn is similar to strspn, but it rejects any matches between the strings. It
compares each character of *reject one by one with s[0]. If it does not find a 
match, it adds 1 to i. Now we will compare each character of *reject with 
position s[1] in case there is a match (and so on until the end of *s in case 
there is not a single match).
*/

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*int main()
{
	char	s[25] = "valdf Fear sadvdda";
	char	reject[25] = "";

	printf("%lu\n", strcspn(s, reject));
	printf("%lu\n", ft_strcspn(s, reject));
}*/
