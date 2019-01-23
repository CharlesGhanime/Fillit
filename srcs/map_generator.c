/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_generator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:22:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/23 19:44:56 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_map_generator(int tetrinb)
{
	int i;
	int j;
	char **map;

	*map = (char *)malloc(2 * tetrinb * sizeof(char));
	i = j = 0;
	while (i++ < tetrinb)
	{
		while (j++ < tetrinb)
		{
			map[i][j] = '.';
			printf("%c", map[i][j]);
		}
		j = 0;
		map[i][j] = '.';
		printf("\n");
	}
	return (0);
}
