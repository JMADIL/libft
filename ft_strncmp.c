/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:35:55 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/12 10:35:56 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t i;

// 	i = 0;

// 	while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) && i < n)
// 	{
// 			i++;
// 	}
// 	if (n)
// 		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
// 	else
// 		return (0);
// }