/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:26:40 by klandave          #+#    #+#             */
/*   Updated: 2024/10/13 18:04:35 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int main()
{
	const char str[] = "Frutifantastico";
	char *res = ft_memchr(str, 'i' , strlen(str));
	
	if (res)
	printf("Encontramos 'i' en la posicion: %ld\n", res - str);
	else
	printf("'i' No fue encontrado\n");
	return (0);
}*/
