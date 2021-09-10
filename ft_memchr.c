/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:23:06 by javferna          #+#    #+#             */
/*   Updated: 2021/09/10 16:04:26 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = s;
	i = 0;
	while (str[i] && str[i] != (unsigned char)c && i < n)
		i++;
	if (!str[i] && (unsigned char)c != '\0')
		return (NULL);
	if (i == n)
		return (NULL);
	return ((void *)&str[i]);
}
