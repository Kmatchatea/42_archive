/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:31:51 by klandave          #+#    #+#             */
/*   Updated: 2024/10/26 23:37:38 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr [i] = '\0';
	return (substr);
}
/*
char    *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char *result;

    // Ejemplo 1: Cadena normal
    result = ft_substr("Hello, world!", 7, 5);
    printf("Resultado 1: %s\n", result);  // Esperado: "world"
    free(result);

    // Ejemplo 2: Inicio fuera de la longitud de la cadena
    result = ft_substr("Hello, world!", 20, 5);
    printf("Resultado 2: %s\n", result);  // Esperado: cadena vacía
    free(result);

    // Ejemplo 3: Substring desde el principio
    result = ft_substr("Hello, world!", 0, 5);
    printf("Resultado 3: %s\n", result);  // Esperado: "Hello"
    free(result);

    // Ejemplo 4: Longitud mayor que el tamaño restante desde start
    result = ft_substr("OpenAI", 4, 10);
    printf("Resultado 4: %s\n", result);  // Esperado: "AI"
    free(result);

    return 0;
}
*/
