/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:58:18 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/07 16:05:29 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;
	
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == (unsigned char )c)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
