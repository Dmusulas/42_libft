/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:41:15 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/15 12:55:09 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n != 0 && (*s1 != 0 || *s2 != 0))
	{
		if (*s1 != *s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}
