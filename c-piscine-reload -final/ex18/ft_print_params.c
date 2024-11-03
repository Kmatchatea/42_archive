/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:22:36 by klandave          #+#    #+#             */
/*   Updated: 2024/09/22 20:25:57 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

int	main(int ac, char **av)
{
	ac = 1;
	while (av[ac])
	{
		ft_putstr(av[ac++]);
		ft_putchar('\n');
	}
}
