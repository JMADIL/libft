/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamoun <ajamoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:03:59 by ajamoun           #+#    #+#             */
/*   Updated: 2024/11/09 19:11:46 by ajamoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_free(char **arr)
{
   int i;

   i = 0;
   while (arr[i])
   {
      free(arr[i]);
      i++;
   }
   free(arr);
}
static int word_len(const char *s, char c, int start)
{
   int   len;

   len = 0;
   
   while (s[start] != '\0' && s[start] != c)
   {
      len++;
       start++;
   }
   return (len);
}
static int word_count(const char *s, char c)
{
   int i;
   int count;
   int in_word;

   i = 0;
   count = 0;
   in_word = 0;
   while (s[i] != '\0')
   {
      if (s[i] != c && in_word == 0)
      {
         count++;
         in_word = 1;
         
      }
      else if(s[i] == c)
         in_word = 0;
      i++;
   }
   return (count);
}
static char **word_cpy(const char *s, char c, char **arr)
{
   int i;
   int j;
   int len;

   i = 0;
   j = 0;
   while (s[i])
   {
      if (s[i] != c)
      {
         len = word_len(s, c ,i);
          arr[j] = ft_substr(s, i, len);
          if(!arr[j])
          {
            ft_free(arr);
            return NULL;
          }
          j++;
          i += len - 1;
      }
      i++;
   }
   arr[j] = NULL;
   return (arr);
}

char **ft_split(char const *s, char c)
{
   char **result;
   if(!s)
      return (NULL);
   result = malloc((word_count(s, c) + 1) * sizeof(char *));
   if(!result)
      return (NULL);
   result = word_cpy(s, c , result);
   if(!result)
   {
      ft_free(result);
      return (NULL);
   }
   return (result);
}
