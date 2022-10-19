/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraybi_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagonzal <cagonzal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:40:40 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/10/17 16:17:27 by cagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arraybi_size(char **str)
{
	int	tam;

	tam = 0;
	if (str != 0)
		while (str[tam] != 0)
			tam++;
	return (tam);
}
