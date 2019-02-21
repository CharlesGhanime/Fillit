/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 23:06:38 by pauljull          #+#    #+#             */
/*   Updated: 2019/02/21 05:24:57 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		first_one(int tetri)
{
	int mask;

	mask = 1;
	while (!(mask & tetri))
		mask <<= 1;
	return (mask);
}

void	set_tetri_map(t_tetri *tetri, t_map *map)
{
	int mask;
	int i;
	int tmp;

	i = 1;
	mask = 1;
	tmp = set_fblock_bit(tetri->tetri, 1) | (((set_fblock_bit(tetri->tetri, 2) >> 4) | ((set_fblock_bit(tetri->tetri, 3) >> 8) | (set_fblock_bit(tetri->tetri, 4) >> 12))));
	tetri->pos_y = map->index;
/*	while (!(mask & tetri->tetri))
	{
		print_bit_int(mask);
		printf("\n");
		print_bit_int(tetri->tetri);
		printf("\n");
		printf("ta mere\n");
		mask <<= 1;
	}
*/	tetri->pos_x = mask;
	while (i <= tetri->length)
	{
		map->line += set_fblock_bit(tetri->tetri, i) >> 4 * (i - 1);
		i += 1;
		map = map->next;
	}	
}