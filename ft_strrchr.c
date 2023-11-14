/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:38:52 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/14 20:49:56 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	strl;

	strl = ft_strlen(s);
	while (s[strl])
	{
		if (s[strl] == c)
			return ((char *)(&s[strl]));
		strl--;
	}
	if (s[strl] == c)
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// #include <assert.h>
// void	test(const char *s, int c)
// {
// 	printf("The pointer to the beggining of str is %p\n", s);
// 	printf("\t[MINE]The first occurance of %c is at address %p\n",
// 		c, ft_strrchr(s, c));
// 	printf("\t[ORIGINAL]The first occurance of %c is at address %p\n",
// 		c, strrchr(s, c));
// 	assert(ft_strrchr(s, c) == strchr(s, c));
// }
//
// int main(void)
// {
// 	test("Hello World!", 'W');
// 	test("", 0);
// 	test("Hello world!", 0); //testing if null byte is seeked
// 	test(0, 0); //segfault is expected
// 	test(0, 'c'); //segfault is expected
// 	return (1);
// }
