/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:43:00 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/06 17:00:12 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    /* declare a tmp unsigned char pointer */
	unsigned char *tmp;
	size_t i;
	
	i = 0;
    /* use malloc to allocate count * size in tmp */
	tmp = malloc(count * size);
	if (!tmp)
	{
		return (NULL);
	}
    /* loop over tmp and set each byte to 0 */
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	tmp[i] = '\0';
    /* return tmp */
	return (tmp);
}
//we have to handle another case !!!!!!!!