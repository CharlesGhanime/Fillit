/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:34:22 by cghanime          #+#    #+#             */
/*   Updated: 2019/02/01 17:44:16 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>
#include <unistd.h>

int		ft_parsing(char *tab, int fd)
{
	int i;
	int diese;
	int ret;

	i = 0;
	diese = 0;
	ret = read(fd, tab, 545);
	tab[ret] = '\0';
	printf("ret : %d\n", ret);
	printf("tab : %s\n", tab);
	while (tab[i] != '\0')
	{
		if (tab[i] == '.')
			i++;
		if (tab[i] == '#')
		{
			diese++;
			printf("diese : %d\n", diese);
			printf("i : %d\n", i);
			printf("tab[i] : %c\n", tab[i]);
			if (tab[i + 1] == '#' || tab[i + (5 - i)] == '#')
				i++;
		}
		if (diese >= 4)
			return (0);
		printf("you fucked up brah\n");
	}
	return (0);
}

int main(int argc, char **argv)
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
