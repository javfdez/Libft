/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:46:13 by javferna          #+#    #+#             */
/*   Updated: 2021/09/06 15:11:49 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

//////////////////////////////////// Part 1 ////////////////////////////////////

int		ft_isalpha(int c);
int		ft_isdigit(int c);;
size_t	ft_strlen(const char *s);

//////////////////////////////////// Part 2 ////////////////////////////////////

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
