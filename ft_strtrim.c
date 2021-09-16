/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:15:26 by javferna          #+#    #+#             */
/*   Updated: 2021/09/16 00:25:41 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && ft_charinset(s1[i], set))
		i++;
	len = ft_strlen(s1);
	if (i == len)
		return (ft_strdup(""));
	while (len - 1 > 0 && ft_charinset(s1[len - 1], set))
		len--;
	str = malloc((len - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
