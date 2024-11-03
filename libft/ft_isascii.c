/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:43:33 by klandave          #+#    #+#             */
/*   Updated: 2024/10/08 22:14:32 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main (void)
{
	int	a;
	int	b;
	int	c;

	a= -10;
	b= 200;
	c= 65;

	if (ft_isascii(a))
		printf("El %d esta en rango ASCII.\n", a);
	else
		printf("El %d no esta en rango ASCII.\n", a);
	
	if (ft_isascii(b))
		printf("El %d esta en rango ASCII.\n", b);
	else
		printf("El %d no esta en rango ASCII.\n", b);

	if (ft_isascii(c))
		printf("El %d esta en rango ASCII.\n", c);
	else
		printf("El %d no esta en rango ASCII.\n", c);
	
	return(0);
}
*/
