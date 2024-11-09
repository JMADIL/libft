/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:07:20 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/04 01:57:05 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*strs;
	size_t	i;
	size_t	j;
	
	if (!s1 || !s2)
		return (NULL);
		
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	strs = malloc((i + j + 1) * sizeof(char));
	if(!strs)
		return (NULL);
	ft_strlcpy(strs, s1, i + 1);
	ft_strlcat(strs, s2, i + j + 1);
	return (strs);
}
