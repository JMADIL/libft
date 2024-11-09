/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 03:38:44 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/06 18:11:45 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	size_t start;
	size_t end;
	
	start = 0;
	end = ft_strlen(s1);
	
	if(!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + start, (end - start));
	trim[end - start] = '\0';
	return (trim);
}