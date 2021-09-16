/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:52:14 by javferna          #+#    #+#             */
/*   Updated: 2021/09/16 16:40:14 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_of_strs(char const *s, char c)
{
	int		i;
	int		nstr;

	i = 0;
	nstr = 0;
	if (!s[i])
		return (nstr);
	while (s[++i])
	{
		if (s[i] == c && s[i - 1] != c)
			nstr++;
	}
	if (!s[i] && s[i - 1] != c)
		nstr++;
	return (nstr);
}

static char	*ft_alloc_cpy(char const *s, char c, int	 *i)
{
	int		j;
	int		len;
	char	*str;

	len = 0;
	while (s[(*i) + len] && s[(*i) + len] != c)
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < len)
	{
		str[j++] = s[(*i)++];
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		nstrings;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	nstrings = ft_n_of_strs(s, c);
	split = malloc((nstrings + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	while (j < nstrings && s[++i])
	{
		if (s[i] != c)
			split[j++] = ft_alloc_cpy(s, c, &i);
	}
	split[nstrings] = NULL;
	return (split);
}
