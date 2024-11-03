/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:34:00 by klandave          #+#    #+#             */
/*   Updated: 2024/10/27 10:34:11 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_word(const char **s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (**s == c)
		(*s)++;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = ft_substr(*s, 0, len);
	*s += len;
	return (word);
}

static int	fill_words(char **result, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		result[i] = get_word(&s, c);
		if (!result[i])
			return (i);
		if (result[i][0] != '\0')
			i++;
		else
			free(result[i]);
	}
	result[i] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		w_count;
	int		i;

	if (!s)
		return (NULL);
	w_count = count_w(s, c);
	result = (char **)malloc((w_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = fill_words(result, s, c);
	if (i != -1)
	{
		while (--i >= 0)
			free(result[i]);
		free(result);
		return (NULL);
	}
	return (result);
}
