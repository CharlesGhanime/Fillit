/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 11:29:57 by cghanime          #+#    #+#             */
/*   Updated: 2019/01/28 18:30:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft/libft.h"

char	**ft_data(void)
{
	char database[19][21];
	int i;

	i = 0;
	strcpy(database[0], "####\n....\n....\n....\n");
	strcpy(database[1], "#...\n#...\n#...\n#...\n");
	strcpy(database[2], "##..\n##..\n....\n....\n");
	strcpy(database[3], "#...\n#...\n##..\n....\n");
	strcpy(database[4], "##..\n.#..\n.#..\n....\n");
	strcpy(database[5], "###.\n#...\n....\n....\n");
	strcpy(database[6], "..#.\n###.\n....\n....\n");
	strcpy(database[7], "##..\n#...\n#...\n....\n");
	strcpy(database[8], ".#..\n.#..\n##..\n....\n");
	strcpy(database[9], "#...\n###.\n....\n....\n");
	strcpy(database[10], "###.\n..#.\n....\n....\n");
	strcpy(database[11], "#...\n##..\n.#..\n....\n");
	strcpy(database[12], "##..\n.##.\n....\n....\n");
	strcpy(database[13], ".#..\n##..\n#...\n....\n");
	strcpy(database[14], ".##.\n##..\n....\n....\n");
	strcpy(database[15], ".#..\n###.\n....\n....\n");
	strcpy(database[16], ".#..\n##..\n.#..\n....\n");
	strcpy(database[17], "#...\n##..\n#...\n....\n");
	strcpy(database[18], "###.\n.#..\n....\n....\n");
	return (database);
}
