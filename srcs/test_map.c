/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 17:02:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/22 19:24:50 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main()
{
	int i;
	int j;
	char **tab;

	i = j = 0;
	while(i < 4)
	{
		while(j < 4)
			{
				tab[i][j] = '.';
				j++;
			}
		j = 0;
		tab[i][j] = '.';
		i++;
	}
	i = j = 0;
		while (i < 4)
		{
			while (j < 14)
			{
				printf("%c", tab[i][j]);
				j++;
			}
			j = 0;
			printf("\n");
			i++;
		}
	return (0);
}
