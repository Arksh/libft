/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonzal <cagonzal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:31:17 by cagonzal          #+#    #+#             */
/*   Updated: 2022/10/17 15:58:22 by cagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/**
 * @brief Creates a new linked list with the result of applying f to each
 * element.
 * It uses del function to free the memory of the elements of the original.
 * 
 * @param lst Linked list.
 * @param f Function to apply to each element.
 * @return t_list* Pointer to the new linked list.
 */
t_list	*ft_lstmap(t_list *lst, int (*f)(int))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&new);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}