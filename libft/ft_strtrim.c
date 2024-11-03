/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klandave <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:31:25 by klandave          #+#    #+#             */
/*   Updated: 2024/10/26 20:36:06 by klandave         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed;

	start = 0;
	end = 0;
	len = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	trimmed [len] = '\0';
	while (len--)
		trimmed[len] = s1[start + len];
	return (trimmed);
}
/*
int main() {
    char *result;

    // Caso 1: Espacios en blanco al principio y al final
    result = ft_strtrim("   Hola Mundo   ", " ");
    if (result) {
        printf("Caso 1: '%s'\n", result);
        free(result);
    }

    // Caso 2: Caracteres específicos al principio y al final
    result = ft_strtrim("xxHola Mundoxx", "x");
    if (result) {
        printf("Caso 2: '%s'\n", result);
        free(result);
    }

    // Caso 3: Todos los caracteres en s1 están en set
    result = ft_strtrim("aaaaaa", "a");
    if (result) {
        printf("Caso 3: '%s'\n", result);
        free(result);
    }

    // Caso 4: Ningún carácter de s1 está en set
    result = ft_strtrim("Hello, World!", "x");
    if (result) {
        printf("Caso 4: '%s'\n", result);
        free(result);
    }

    // Caso 5: Cadena vacía
    result = ft_strtrim("", " ");
    if (result) {
        printf("Caso 5: '%s'\n", result);
        free(result);
    }

    return 0;
} 
 */
