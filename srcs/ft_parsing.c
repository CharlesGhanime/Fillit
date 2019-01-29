/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:34:22 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/29 18:23:49 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fillit.h"
#include "libft/libft.h"
#include <libc.h>

void	ft_parsing(char *tab, int fd)
{
	int i;
	int ret;

	i = 0;
	ret = read(fd, tab, 545);
	{
		if ((tab[i] == '#' && tab[i + 1] == '#') || (tab[i] == '#' && tab[i + 5]))
			if ((tab[i] == '.' && tab[i - 1] == '#') || (tab[i] == '#' && tab[i + 1] == '.'))
					i++;
	}
}
