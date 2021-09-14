/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:34:12 by javferna          #+#    #+#             */
/*   Updated: 2021/09/14 11:03:53 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*cast_src;
	char		*cast_dst;
	size_t		i;

	cast_src = src;
	cast_dst = dst;
	i = 0;
	if (src == dst)
		return (dst);
	else if (src < dst)
	{
		while (i++ < len)
			cast_dst[len - i] = cast_src[len - i];
	}
	else
	{
		while (i < len)
		{
			cast_dst[i] = cast_src[i];
			i++;
		}
	}
	return (dst);
}
