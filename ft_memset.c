/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:09:06 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/07 16:06:22 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    
    ptr = (unsigned char *)b;
    while (0 < len)
    {
        *ptr = (unsigned char )c;
        len--;
        ptr++;
    }
    return (b);
}
