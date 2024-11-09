/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:36:49 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/01 19:44:15 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	char *ptr;
	ptr = (char *)str;
	
	while (*ptr)
	{
		if (*ptr == (unsigned char )c)
			return (ptr);
		ptr++;
	}
	if ((unsigned char )c == '\0')
		return (ptr);
	return (NULL);
}