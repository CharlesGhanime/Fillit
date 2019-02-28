/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:02:42 by pauljull          #+#    #+#             */
/*   Updated: 2019/02/27 18:08:02 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map   *map_gen(int n_tetri)
{
    t_map   *map;
	t_map *save;
	int     i;

	map = NULL;
 	i = 0;
    while (i < ft_square(4 * n_tetri))
	{
        map = ft_lpb_map(&map, ft_square(4 * n_tetri), i);
		if (i == 0)
			save = map;
		i += 1;
	}
    return (save);
}
