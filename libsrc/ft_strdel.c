/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:52:28 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/19 14:43:08 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}