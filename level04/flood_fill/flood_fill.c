/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:15:54 by marirodr          #+#    #+#             */
/*   Updated: 2023/03/13 12:06:26 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

/*In this function, as we use recursion in a multiple way, the first thing we 
need is an exit condition for the recursion: the first four exit conditions 
inside the if statement are to control that the current position we are in does
not go beyond the limits of the map; and the last one 
(tab[cur.y][cur.x] != fill_value) is to control when we are at a character that
we do not want to replace.

Then we use multiple recursion to move around the map. To do this, we perform a
casting with the type of the structure and initialize it between braces.

An important note is the order of x and y in the function, why in some points of
the function the order is x, y and in others y, x. The logical thing is to use 
the order that comes in the structure (x, y), but in the main function that they
provide, the order is reversed -first define y and then x- in such a way that it
changes the result. Therefore -since we are not going to change the main function
they provide us- an easy to understand mnemonic rule is that while we are between
brackets ([]) the order is y, x; while when we are between braces ({}) the order
is as it appears in the structure x, y.
-> tab[y][x].
-> {x, y}

*/

void	fill(char **tab, t_point size, t_point cur, char fill_value)
{
	if (cur.x < 0 || cur.y < 0 || cur.x >= size.x || cur.y >= size.y || tab[cur.y][cur.x] != fill_value)
		return ;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x, cur.y + 1}, fill_value);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, fill_value);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, fill_value);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, fill_value);
}

/*In this way, in the flood_fill function, all we have to do is call fill,
specifying in the fourth parameter (char fill_value) the starting position
within the map.*/

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab,	size,	begin, tab[begin.y][begin.x]);
}

/* If we modified the main function to maintain the order of the structure,
the function would look like this:

void	fill(char **tab, t_point size, t_point cur, char fill_value)
{
	if (cur.x < 0 || cur.y < 0 || cur.x >= size.x || cur.y >= size.y || tab[cur.x][cur.y] != fill_value)
		return ;
	tab[cur.x][cur.y] = 'F';
	fill(tab, size, (t_point){cur.x, cur.y + 1}, fill_value);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, fill_value);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, fill_value);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, fill_value);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab,	size,	begin, tab[begin.x][begin.y]);
}

#include <stdlib.h>
#include <stdio.h>
//#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.x);
	for (int i = 0; i < size.x; ++i)
	{
		new[i] = malloc(size.y + 1);
		for (int j = 0; j < size.y; ++j)
			new[i][j] = zone[i][j];
		new[i][size.y] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {5, 8};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.x; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {4, 7};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.x; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/
