/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:58:13 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/13 15:02:44 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	rs;

	i = 0;
	s = 1;
	rs = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (rs > LONG_MAX / 10)
		{
			if (s == 1)
				return (-1);
			else
				return (0);
		}
		rs = rs * 10 + (str[i] - 48);
		i++;
	}
	return (rs * s);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("-155294569898988456426556123"));
// 	printf("%d\n", atoi("-155294569898988456426556123"));
// }
