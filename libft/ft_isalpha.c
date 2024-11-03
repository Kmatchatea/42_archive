/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 08:12:22 by klandave          #+#    #+#             */
/*   Updated: 2024/10/05 15:33:35 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main (void)
{
	int	alp;

	alp = 'q';
	if (ft_isalpha(alp) > 0)
		printf("char: %c, Es una letra", alp);
	else
		printf("char: %c, No una letra", alp);
	return (0);
}
*/
