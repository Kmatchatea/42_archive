/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:32:57 by klandave          #+#    #+#             */
/*   Updated: 2024/09/23 20:14:45 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 1;
	while (sq * sq < nb)
		sq++;
	if (sq * sq == nb)
		return (sq);
	return (0);
}
