/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:11:42 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/15 19:34:23 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include "../libft.h"

void	test_ft_atoi(const char *nptr, int *counter)
{
	printf("Test %d\n", *counter);
	printf("\t[MINE]Result is %i\n", ft_atoi(nptr));
	printf("\t[ORIGINAL]Result is %i\n", atoi(nptr));
	assert(ft_atoi(nptr) == atoi(nptr));
	(*counter)++;
}

int	main(void)
{
	int	counter = 0;

	test_ft_atoi("", &counter);
	test_ft_atoi("12312", &counter);
	test_ft_atoi("   12312", &counter);
	test_ft_atoi(" +12312", &counter);
	test_ft_atoi(" +-12312", &counter);
	test_ft_atoi("1231231232312", &counter);
	test_ft_atoi("123--+", &counter);
	return (1);
}
