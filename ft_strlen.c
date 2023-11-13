/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:36:15 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/13 12:59:46 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/*
#include <assert.h>
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2 && (strcmp(argv[1], "--auto") != 0))
	{
		assert(ft_strlen(argv[1]) == strlen(argv[1]));
		printf("Tests succeeded.");
	}
	else if (argc == 2 && (strcmp(argv[1], "--auto") == 0))
	{
		assert(ft_strlen("Testing.") == strlen("Testing."));
		assert(ft_strlen("") == strlen(""));
		assert(ft_strlen("See\0if\0null\0works") 
			== strlen("See\0if\0null\0works"));
		assert(ft_strlen("See\nif\nnewline\nworks") 
			== strlen("See\nif\nnewline\nworks"));
		printf("Tests succeeded.");
	}
	else
	{
		printf("Please provide only one argument to this\
program - a test string.\n");
		printf("Alternatively provide argument --auto \
to execute automatic testing.");
	}
	return (1);
}
*/
