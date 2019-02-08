/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 09:48:40 by cghanime          #+#    #+#             */
/*   Updated: 2019/02/08 09:52:03 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "../includes/Fillit.h"

int		ft_parsing(char *tab, int fd);

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
