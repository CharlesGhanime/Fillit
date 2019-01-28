/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 14:59:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/24 18:00:30 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_tetri_counter(int fd, char **tab)
{
	int counter;
	int i;
	int j;

	i = 0;
	j = 0;
	while (read(fd, *tab, 1) > 0)
		if (tab[i][4] == '\n' && tab[i + 1][0] == '\n')
			counter++;
	return (counter);
}

int main(int argc, char **argv)
{
	int fd;
	char **tab;

	if (argc > 1)
	{
		fd = open(argv[1], O_RDONLY);
		ft_tetri_counter(fd, *tab);
	}
	return (0);
}
