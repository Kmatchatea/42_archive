/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:25:49 by klandave          #+#    #+#             */
/*   Updated: 2024/10/22 20:04:17 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*ptr;
	int	ts;

	ts = num * size;
	if (num == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(ts);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, ts);
	return (ptr);
}
