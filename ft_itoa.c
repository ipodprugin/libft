/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:11:59 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/10 20:33:35 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*result;

	result = (char *)malloc(2 * sizeof(char));
	if (!result)
		return (0);
	if (n == -2147483648LL)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		result[0] = '-';
		result[1] = '\0';
		result = ft_strjoin(result, ft_itoa(-n));
	}
	else if (n >= 10)
		result = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		result[0] = n + '0';
		result[1] = '\0';
	}
	return (result);
}