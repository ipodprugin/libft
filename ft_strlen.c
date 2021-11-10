/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:06:31 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/10 21:23:24 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size_t	ft_strlen(char *str)
{
	t_size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
