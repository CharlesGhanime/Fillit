/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_final.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 16:42:54 by cghanime          #+#    #+#             */
/*   Updated: 2019/03/06 19:07:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_print_map_final(t_tetri *tetri, t_map *map)
{
	 int mask;
	 int i;
	int index;
	 char letter;

	while (tetri->next && map->next)
	{
		mask = (tetri->tetri & map->line);
		i = 1;
		index = 0;
		letter = tetri->letter;
		while (index != map->width)
		{
			while (mask)
			{
				(mask & i ? write(1, &letter, 1) : write (1, "0", 1));
				mask >>= i;
			}
			index += 1;
		}
		tetri = tetri->next;
		map = map->next;
	}
}
