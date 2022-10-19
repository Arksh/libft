/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonzal <cagonzal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:04:59 by cagonzal          #+#    #+#             */
/*   Updated: 2022/10/17 15:57:30 by cagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_list.h"

/**
 * @brief Adds a new element at the end of a linked list.
 * 
 * @param lst Linked list.
 * @param new New element.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
