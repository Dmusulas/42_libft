/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:34:44 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/18 00:49:25 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*new_str;

	i = 0;
	len = ft_strlen(s) + 1;
	new_str = malloc(len * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
//
// #include <stdio.h>
// char	rot13_decrypt(unsigned int i, char c)
// {
// 	i++;
// 	return (c + 13);
// }
//
// int main(void)
// {
// 	char	*test;
// 	test = ft_strmapi("Rnpu cebwrpg bs gur", rot13_decrypt);
// 	printf("%s", test);
// 	free(test);
// 	return (1);
// }
