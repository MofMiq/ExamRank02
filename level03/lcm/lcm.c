/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:09:23 by hunter            #+#    #+#             */
/*   Updated: 2023/03/06 17:23:34 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int lcm (unsigned int a, unsigned int b)
{
    unsigned int n;

    if (!a || !b)
        return (0);
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}

int main()
{
    printf("%d\n", lcm(2, 3));
}
