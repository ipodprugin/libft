/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:47:31 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/11 19:02:24 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	t_size_t	index;

	index = 0;
	if (s != NULL)
	{
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
		s[index] = 0;
	}
}
