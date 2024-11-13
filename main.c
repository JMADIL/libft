/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:42:42 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/12 13:49:09 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("%s", ft_strnstr("hello world", "lo", 10));
}

// int main()
// {
// 	int *arr = ft_calloc(3, sizeof(int));
// 	if (arr && arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
// 		printf("leaaz rak nade");
// 	else
// 		printf("khuya rak khari");
// 	free (arr);
// 	return (0);
// }
