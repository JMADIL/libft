/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:20:49 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/07 16:07:22 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char *ptr;

    ptr = NULL;
    while (*str)
    {
        if (*str == (unsigned char )c)
        {
            ptr = (char *)str;
        }
        str++;
    }
    if ((unsigned char )c == '\0')
    {
        return ((char *)str);
    }
    return (ptr);
}