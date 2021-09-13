/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:34:12 by javferna          #+#    #+#             */
/*   Updated: 2021/09/13 16:43:18 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
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
		while (i++ < n)
			cast_dst[n - i] = cast_src[n - i];
	}
	else
	{
		while (i < n)
		{
			cast_dst[i] = cast_src[i];
			i++;
		}
	}
	return (dst);
}
