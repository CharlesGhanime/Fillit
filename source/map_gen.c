/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:02:42 by pauljull          #+#    #+#             */
/*   Updated: 2019/02/21 06:31:32 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map   *gen(t_map **map_ref, int width)
{
    int     i;
	t_map	*l_map;

	l_map = *map_ref;
    i = 0;
    while (i < width)
	{
        l_map = ft_lpb_map(&l_map, width);
		l_map->index = i;
		printf("width = %d\n", width);
		i += 1;
	}
	return (l_map);
}

t_map   *map_gen(int n_tetri)
{
    t_map   *map;

	map = NULL;
    return (gen(&map, 3));
}
