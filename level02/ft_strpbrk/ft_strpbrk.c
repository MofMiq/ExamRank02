/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:17:30 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:27:57 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

/*
Returns a pointer to the first occurrence in str1 of any of the characters that
are part of str2, or a null pointer if there are no matches. The search does not
include the terminating null-characters of either strings, but ends there.

By using two loops in this way, we ensure that for each position of the pointer
in *s1, all positions of i in s2 are checked. Also, partly for this reason, we 
use a counter for s2 and not a pointer, because we reset its "reading" for each
position of the pointer in *s1. Casting is done due to incompatibility with const 
char.
*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

/*int main()
{
	char	s1[25] = "Fear the old blood";
	char	s2[5] = "old";

	printf("%s\n", strpbrk(s1, s2));
	printf("%s\n", ft_strpbrk(s1, s2));
}*/
