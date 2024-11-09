/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:06:35 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/07 16:05:39 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
   size_t i;

   i = 0;
  
   while ( i < n)
   {
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
   }
   return(0);
}
