/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:45:42 by klandave          #+#    #+#             */
/*   Updated: 2024/10/27 02:08:53 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	while (i < s1_len)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (i - s1_len < s2_len)
	{
		joined_str[i] = s2[i - s1_len];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
