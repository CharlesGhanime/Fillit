/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 13:39:51 by pauljull          #+#    #+#             */
/*   Updated: 2019/02/28 19:23:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/fillit.h"



int	main(int ac, char **av)
{
	char *path;
	int	fd;
	t_tetri	*tetri;
	int n_tetri;
	int count;
	t_map *map;
	t_tetri *save;
	int mask;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (!(n_tetri = ft_read(fd, &path)))
		return (0);
	tetri = parser_file(path, n_tetri);
	map = map_gen(n_tetri);
	while ()
		solver_recursif(tetri, map, 0);
	save = tetri;
	while (tetri)
	{
		mask = tetri->pos_x;
		while ((mask & tetri->tetri) == 0)
			mask <<= 1;
		tetri->pos_x = mask;
		tetri = tetri->next;
	}
	tetri = save;
//	print_list_tetri(tetri);
//	print_bit_int(tetri->tetri);
//	print_map_bit(map);
//	ft_print_map_final(tetri, map);
	return (0);
}
