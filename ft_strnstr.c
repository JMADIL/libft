/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:07:43 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/12 13:46:08 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		n = 0;
		while ((i + n) < len && substr[n] && str[i + n] && str[i + n] == substr[n])
		{
			n++;
		}
		if (substr[n] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
