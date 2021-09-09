/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:34:12 by javferna          #+#    #+#             */
/*   Updated: 2021/09/09 14:12:53 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*cast_src;
	char		*cast_dest;
	size_t		i;

	cast_src = src;
	cast_dest = dest;
	i = 0;
	if (src == dest)
		return (dest);
	else if (src < dest)
	{
		while (i++ < n)
			cast_dest[n - i] = cast_src[n - i];
	}
	else
	{
		while (i < n)
		{
			cast_dest[i] = cast_src[i];
			i++;
		}
	}
	return (dest);
}
