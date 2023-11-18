/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:53:52 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/18 18:15:55 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size >= src_len + 1)
	{
		ft_memcpy(dst, src, src_len);
		dst[src_len] = 0;
	}
	else if (size)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}
// #include <stdio.h>
// #include <bsd/string.h> // also need to compile with -lbsd
//
// size_t strlcpy(char *dst, const char *src, size_t siz);
// int main()
// {
// 	char src[] = "Volet";
// 	char dest[] = "Beach";
//
//
// 	printf("The initial src is %s\n", src);
// 	printf("The initial dest is %s\n", dest);
//
// 	size_t len = ft_strlcpy(dest, src, 5);
// 	printf("[MY FUN]Value after func src is %s\n", src);
// 	printf("[MY FUN]Value after func dest  is %s\n", dest);
// 	size_t length_t = strlcpy(dest, src, 5);
// 	printf("[BSD ORIGINAL]Value after func src is %s\n", src);
// 	printf("[BSD ORIGINAL]Value after func dest  is %s\n", dest);
// 	printf("[MY FUN]Len of the src str  %zu\n", len);
// 	printf("[BSD ORIGINAL]Len of the src str  %zu\n", length_t);
//
// }
