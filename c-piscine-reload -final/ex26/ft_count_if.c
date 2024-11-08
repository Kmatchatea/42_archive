/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:24:54 by klandave          #+#    #+#             */
/*   Updated: 2024/10/01 18:27:44 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (*tab)
	{
		if ((*f)(*tab))
			i++;
		tab++;
	}
	return (i);
}
