/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:45:14 by javferna          #+#    #+#             */
/*   Updated: 2021/09/17 18:31:15 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*aux;

	if (!lst || !f)
		return (NULL);
	aux = ft_lstnew((*f)(lst->content));
	if (!aux)
		return (NULL);
	res = aux;
	lst = lst->next;
	while (lst)
	{
		aux->next = ft_lstnew((*f)(lst->content));
		if (!(aux->next))
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		aux = aux->next;
	}
	aux->next = NULL;
	return (res);
}
