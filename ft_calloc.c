/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:42:50 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/06 15:41:12 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size_t num, t_size_t size)
{
	char	*p;

	p = (char *)malloc(num * size);
	if (p)
		ft_bzero(p, num);
	return ((void *)p);
}