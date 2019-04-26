/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartole <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 23:43:20 by mbartole          #+#    #+#             */
/*   Updated: 2018/11/23 12:05:03 by mbartole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int	sign;

	res = 0;
	while ((int)*s == 32 || ((int)*s >= 9 && (int)*s <= 13))
		s++;
	sign = (*s == '-' ? -1 : 1);
	if (sign == -1 || *s == '+')
		s++;
	while (*s && *s >= '0' && *s <= '9')
		res = res * 10 + *s++ - 48;
	return (res * sign);
}