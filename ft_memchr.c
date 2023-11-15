/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:24:27 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/15 17:55:42 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cs;
	unsigned char		cc;

	cs = s;
	cc = c;
	while (n--)
	{
		if (*cs == cc)
			return ((void *)cs);
		cs++;
	}
	return (NULL);
}
