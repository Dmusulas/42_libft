/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:03:45 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/19 20:09:26 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i_src;
	size_t	i_dest;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i_dest = dstlen;
	i_src = 0;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while (src[i_src] && i_src < size - dstlen - 1)
		dst[i_dest++] = src[i_src++];
	dst[i_dest] = '\0';
	return (srclen + dstlen);
}
