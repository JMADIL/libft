/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:12:28 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/03 23:03:52 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *dest;
    int i;

    i = 0;
    dest = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (!dest)
        return(NULL);
     while (s1[i] != '\0')
     {
        dest[i] = s1[i];
        i++;
     }
     dest[i] = '\0';
     return (dest);
}