/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_database.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 18:16:07 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/29 16:12:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft/libft.h"

char **ft_fill_data(char **database);
char **ft_data(void);


int main(void)
{
	char	**data = ft_data();
	int i;

	i = 0;
	while (i < 19)
	{
		printf("%s\n", data[i]);
		i++;
	}
	return (0);
}
