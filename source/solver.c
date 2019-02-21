/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:16:53 by pauljull          #+#    #+#             */
/*   Updated: 2019/02/21 06:07:33 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"
/*
int		backtracking(t_tetri *tetri, t_map *map)
{
	if ((tetri->pos_x <<= (1 + tetri->length)) <= map->width)
	{	
		tetri->tetri <<= 1;
		tetri->pos_x <<= 1;
		if (multi_check(tetri, map))


	}
}
*/
void	solver(t_tetri **tetri_ref, t_map **map_ref)
{
	t_tetri	*l_tetri;
	t_map	*l_map;
	t_tetri *save;


	l_tetri = *tetri_ref;
	l_map = *map_ref;
	while (l_tetri->next)
	{
		while (l_map->next && l_tetri->next)
		{
			save = l_tetri;
			if (multi_check(l_tetri, l_map))
			{
				set_tetri_map(l_tetri, l_map);
				l_tetri = l_tetri->next;
				l_map = *map_ref;
			}
			else if ((l_tetri->pos_x <<= (1 + l_tetri->length)) <= power(2, l_map->width))
			{	
				l_tetri->tetri <<= 1;
				l_tetri->pos_x <<= 1;
			}
			else
			{
				l_map = l_map->next;
				l_tetri->tetri = save->tetri;
				l_tetri->pos_y += 1;
				l_tetri->pos_x = 1;
			}
		}
//		if (!l_map)
//			if (backtracking(l_map, l_tetri->prev) == 1)
//				print_map_final(*tetri_ref, *map_ref);
	}
}