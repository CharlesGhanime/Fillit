/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:34:22 by cghanime          #+#    #+#             */
/*   Updated: 2019/02/06 18:24:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>
#include <unistd.h>

typedef int bool;
#define true 1
#define false 0

int check_lines(char *tab, int fd)
{
	int i;
	int diese_lines;

	i = 0;
	diese_lines = 0;

	while (tab[i] != '\n')
	{
		if (tab[i] != '#' && tab[i] != '.')
		{
			printf("WHAT?! WADAFAC LINES!\n");
			break;
		}
		if (tab[i] == '#')
		{
			printf ("ca rentre dans cette boucle\n");
			diese_lines++;
			printf("diese_line : %d\n", diese_lines);
			if (tab[i] == '#' && tab[i + 1] == '#' && diese_lines <= 3)
			{
				printf("c'est bon mafack les lines\n");
				return (diese_lines);
			}
		}
		i++;
	}
	return (0);
}

int check_columns(char *tab, int fd)
{
	int i;
	int diese_columns;

	i = 0;
	diese_columns = 0;

	while (tab[i] != '\0')
	{
		if (tab[i] != '#' && tab[i] != '.')
		{
			printf("WHAT?! WADAFAC COLUMNS!\n");
			break;
		}
		if (tab[i] == '#')
		{
			printf ("ca rentre dans cette boucle\n");
			diese_columns++;
			printf("diese_columns : %d\n", diese_columns);
			if (tab[i] == '#' && tab[i + 5] == '#' && diese_columns <= 3)
			{
				printf("c'est bon mafack les columns\n");
				return (diese_columns);
			}
		}
		i++;
	}
	return (0);
}

int		ft_parsing(char *tab, int fd)
{
	int i;
	int diese_total;
	int ret;

	i = 0;
	diese_total = 0;
	ret = read(fd, tab, 545);
	tab[ret] = '\0';
	check_lines(tab, fd);
	check_columns(tab, fd);
	diese_total = check_lines(tab, fd) + check_columns(tab, fd);
	if (diese_total != 3)
	{
		printf("INVALID PATTERN THO");
			return (0);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;
	char *tab;

	tab = (char *)malloc(sizeof(char) * 545);
	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		printf("fd : %d\n", fd);
		ft_parsing(tab, fd);
	}
	return (0);
}
