/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:46:16 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/14 11:52:25 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	cdest = dest;
	csrc = src;
	if (dest == src || n == 0)
		return (dest);
	while (n--)
	{
		*cdest++ = *csrc++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	src[8] = "MINEFUN";
// 	const char	src2[8] = "LIBCFUN";
// 	char		dest[8] = "ZVMNRDA";
//
// 	printf("Before memcpy (MINE): %s\n", dest);
// 	ft_memcpy(dest, src, 8);
// 	printf("After memcpy (MINE): %s\n", dest);
// 	printf("Before memcpy (LIBC): %s\n", dest);
// 	memcpy(dest, src2, 8);
// 	printf("After memcpy (LIBC): %s", dest);
//
// 	// NULLS
// 	// ft_memcpy(((void *)0), "segufaultu pls", 14);
// 	// ft_memcpy("      ", ((void *) 0), 14);
// 	//ft_memcpy(((void*)0), ((void*)0), 42); // needs to handle gracefully
// 	//memcpy(((void*)0), ((void*)0), 42);
// 	// ft_memcpy(((void*)0), "segfaulter tu dois", 17);
// 	return (1);
// }
