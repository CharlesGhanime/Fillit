/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:27:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/21 17:44:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_map_generator(int tetrinb)
{
	char **map;
	static int tetrisurface;
	int i;
	int j;

	tetrisurface = 16;
	if(!(**map = (char **)malloc(sizeof(char) * tetrisurface * tetrinb)))
		return (NULL);
	while (i < (4 * tetrinb))
	{
		map[i][j] = ".";
		while (j < (4 * tetrinb))
		{
			map[i][j]  ".";
			j++;
		}
	i++;
	}
	printf("%s", map[i][j]);
	return (map);
}
