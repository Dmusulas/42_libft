/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:51:17 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/15 17:55:26 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	cs1 = s1;
	cs2 = s2;
	while (n--)
	{
		if (*cs1 != *cs2)
		{
			return (*cs2 - *cs1);
		}
		cs1++;
		cs2++;
	}
	return (0);
}
