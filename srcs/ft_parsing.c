/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:34:22 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/31 18:38:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>

int		ft_parsing(char *tab, int fd)
{
	int i;
	int diese;
	int ret;

	i = 0;
	diese = 0;
	ret = read(fd, tab, 545);
	while (i != '\0')
	{
		if (tab[i] == '#')
			diese++;
		if (diese > 4)
			return (0);
		if ((tab[i] == '#' && tab[i + 1] == '#') || (tab[i] == '#' && tab[i + (5 - i)] == '#'))
			if ((tab[i] == '.' && tab[i + (5 - i)] == '#') || (tab[i] == '#'))
			{
				printf("test ok");
				i++;
			}
	}
	return (0);
}

int main(int argc, char **argv)
{
	int fd;
	char *tab;

	if (argc > 2)
	{
		fd = open(argv[1], O_RDONLY);
		ft_parsing(tab, fd);
	}
	return (0);
}
