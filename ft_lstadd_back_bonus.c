/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:14:46 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/10 17:55:29 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;

	if(!lst || !new)
		return;
	if(*lst == NULL)
	{
		*lst = new;
		return;
	}
	while (node -> next)
	{
		node = node ->next;
	}
	node -> next = new;
}