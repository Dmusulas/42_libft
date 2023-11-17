/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmusulas <dmusulas@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:16:59 by dmusulas          #+#    #+#             */
/*   Updated: 2023/11/17 21:12:59 by dmusulas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c);
static char		*get_word(char const *s, char c);
static size_t	strlen_sep(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array_of_words;
	int		i;

	i = 0;
	array_of_words = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!array_of_words)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			array_of_words[i] = get_word(s, c);
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	return (array_of_words);
}

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static size_t	strlen_sep(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*get_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	int		i;

	len = strlen_sep(s, c);
	i = 0;
	if (!len)
		return (NULL);
	word = ft_calloc((len + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}
// #include <stdio.h>
// void	test_count_words(char const *s, char c)
// {
// 	printf("IN the string '%s' split using '%c' there would be: %i substrs\n",
// 		s, c, count_words(s, c));
// }
// void	test_split(char const *s, char c)
// {
// 	char	**split;
// 	int		i;
//
// 	split = ft_split(s, c);
// 	i = 0;
// 	while (split[i])
// 	{
// 		printf("The %i word is: '%s'\n", i, split[i]);
// 		i++;
// 	}
// 	printf("---- OVER --- \n");
// }
//
// int main(void)
// {
// 	test_count_words("Hello World!", ' ');
// 	test_count_words("front    Hello World!  back", ' ');
// 	test_count_words("  Hello World!  ", ' ');
// 	test_count_words("  Hello blah World!  final", ' ');
// 	test_split("Hello darkness bye bye world", ' ');
// 	return (1);
// }
