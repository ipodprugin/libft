/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:10:23 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/11 20:09:38 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*char_;

	char_ = (char *)str + ft_strlen((char *)str);
	while (*char_ != (char)ch)
	{
		if (*char_ == *str)
			return (0);
		char_--;
	}
	return (char_);
}
