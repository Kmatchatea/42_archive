/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:37:35 by klandave          #+#    #+#             */
/*   Updated: 2024/10/01 21:37:39 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	display_file(char **argv)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE];

	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buffer, BUFFER_SIZE);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (ret > 0)
	{
		write (1, buffer, ret);
		ret = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		display_file(argv);
	}
	return (0);
}
