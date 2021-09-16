/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:19:22 by javferna          #+#    #+#             */
/*   Updated: 2021/09/16 16:40:33 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long long nb)
{
	size_t	len;

	len = 1;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_alloc_fill(long long nb, int sign)
{
	char	*str;
	size_t	len;

	len = ft_size(nb) + sign ;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	str[len--] = '\0';
	while (nb >= 10)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	str[len] = nb + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long long			nb;
	int					sign;

	nb = n;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nb *= -1;
	}
	return (ft_alloc_fill(nb, sign));
}
