/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:58:13 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/07 16:09:01 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
	int i;
	int s;
	int rs;
	
	i = 0;
	s = 1;
	rs = 0;
	while ((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		rs = rs * 10 + (str[i] - 48);
		i++;
	}
	return (rs * s);
}
