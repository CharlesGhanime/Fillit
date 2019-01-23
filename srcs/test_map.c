/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:23:19 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/23 17:43:30 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int main()
{
	int i;
	int j;
	char tab;

	*tab = (char *)malloc(4 * 4 * sizeof(char))
		return (NULL);
	i = j = 0;
	while(i++ < 4)
	{
		while(j++ < 4)
			{
				tab[i][j] = '.';
				printf("%c", tab[i][j]);
			}
		j = 0;
		tab[i][j] = '.';
		printf("\n");
	}
	return (0);
}
