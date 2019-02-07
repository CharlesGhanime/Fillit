/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction_checking_tetriminos.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:19:44 by cghanime          #+#    #+#             */
/*   Updated: 2019/02/07 18:05:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>
#include <unistd.h>

int ft_checking_tetriminos(char *tab, int fd)
{
	int i;
	int diese;
	int flag_line;
	int flag_column;

	i = 0;
	diese = 0;
	flag_line = 0;
	flag_column = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == '.')
			i++;
		if (tab[i] == '#')
		{
			diese++;
			if (tab[i + 1] == '#' || tab[ + - 1] == '#')
				flag_line = 1;
			if (tab[i + 5] == '#' || tab[i - 5] == '#')
				flag_column = 1;
		}
	}
}
