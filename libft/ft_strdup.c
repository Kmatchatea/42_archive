/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:16:53 by klandave          #+#    #+#             */
/*   Updated: 2024/10/27 00:19:18 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str [len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup [i] = '\0';
	return (dup);
}
/*int main()
{
    const char *original = "Fruti, fantastico!";
    char *duplicado;

    duplicado = ft_strdup(original);
    if (duplicado == NULL)
    {
        printf("Error al duplicar la cadena.\n");
        return 1;
    }

    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", duplicado);

    // Liberar memoria después de usar el duplicado
    free(duplicado);

    return 0;
} */
