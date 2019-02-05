/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:34:22 by cghanime          #+#    #+#             */
/*   Updated: 2019/02/05 19:03:37 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>
#include <unistd.h>

int		ft_parsing(char *tab,		int fd)
{
	int i;
	int diese;
	int ret;

	i = 0;
	diese = 0;
	ret = read(fd, tab, 545);
	tab[ret] = '\0';
	printf("ret : %d\n", ret);
	printf("tab : \n%s\n", tab);
	while (tab[i] != '\0')
	{
		if (tab[i] == '.')
			i++;
		if (tab[i] == '#')
		{
			printf("diese : %d\n", diese);
			printf("i : %d\n", i);
			printf("tab[i] :\n%c\n", tab[i]);
			diese++;
			i++;
			if (tab[i + 1] == '#' || tab[i + 5] == '#')
			{
			}
		}
		if (diese > 4)
		{
			printf("Hello Mofo");
			return (0);
		}
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
