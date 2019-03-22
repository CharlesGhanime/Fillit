/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup_cat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:33:54 by pauljull          #+#    #+#             */
/*   Updated: 2019/03/14 15:52:57 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_str_dup_cat(char *s1, char *s2)
{
	int		len_s1;
	int		len_s2;
	char	*new;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(new = (char *)malloc(len_s1 + len_s2 + 1)))
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcat(new, s2);
	return (new);
}
