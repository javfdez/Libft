/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:52:14 by javferna          #+#    #+#             */
/*   Updated: 2021/09/15 20:34:34 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnb(char const *s, char c)
{
	size_t	i;
	size_t	nstr;

	i = 0;
	nstr = 1;
	while (s[++i])
	{
		if (s[i] == c && s[i - 1] != c)
			nstr++;
	}
	return (nstr);
}

static void	ft_alloc_split(char **split, char const *s, char c, size_t nstr)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = 0;
	while (++i < nstr)
	{
		while (s[j] && s[j] == c)
			j++;
		k = 0;
		while (s[j] && s[j++] != c)
			k++;
		split[i] = malloc((k + 1) * sizeof(char));
	}
}

static void	ft_fill_split(char **split, char const *s, char c, size_t nstr)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = 0;
	while (++i < nstr)
	{
		while (s[j] && s[j] == c)
			j++;
		k = 0;
		while (s[j] && s[j] != c)
			split[i][k++] = s[j++];
		split[i][k] = '\0';
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	nstr;

	if (!s)
		return (NULL);
	nstr = ft_strnb(s, c);
	split = malloc((nstr + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[nstr] = NULL;
	ft_alloc_split(split, s, c, nstr);
	ft_fill_split(split, s, c, nstr);
	return (split);
}

// int main()
// {
// 	char	**split;
// 	int		i;

// 	split = ft_split("          ", ' ');
// 	i = -1;
// 	while (++i < 6)
// 		printf("%s\n", split[i]);
// 	return (0);
// }
