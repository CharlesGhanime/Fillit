/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:52:19 by pauljull          #+#    #+#             */
/*   Updated: 2019/01/02 20:35:54 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	index;

	index = 0;
	while (src[index] != 0)
	{
		dst[index] = src[index];
		index += 1;
	}
	dst[index] = 0;
	return (dst);
}
