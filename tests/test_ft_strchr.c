/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:12:40 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/15 13:13:46 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../libft.h"

void	test(const char *s, int c)
{
	printf("The pointer to the beggining of str is %p\n", s);
	printf("\t[MINE]The first occurance of %c is at address %p\n",
		c, ft_strchr(s, c));
	printf("\t[ORIGINAL]The first occurance of %c is at address %p\n",
		c, strchr(s, c));
	assert(ft_strchr(s, c) == strchr(s, c));
}

int	main(void)
{
	test("Hello World!", 'W');
	test("", 0);
	test("Hello world!", 0);
	test(0, 0);
	test(0, 'c');
	return (1);
}
