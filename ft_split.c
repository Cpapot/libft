/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:35:50 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/15 19:15:40 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == c)
		count--;
	while (str[i] != '\0')
	{
		if (str[i] == c && (!((str[i + 1] == c))
				&& str[i + 1] != '\0'))
			count++;
		i++;
	}
	if (str[0] != '\0' || c == '\0')
		count++;
	return (count);
}

static char	*ft_strndup(char const *src, int size)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == 0)
		return (0);
	while (src[index] != '\0' && index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

static char	**free_result(char **result)
{
	int	i;

	i = 0;
	while (result[i] != 0)
	{
		free (result[i]);
		i++;
	}
	free (result);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		buff;
	int		u;

	i = 0;
	u = 0;
	result = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (result == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		buff = i;
		while (str[i] != c && str[i] != '\0')
			i++;
		result[u] = ft_strndup(&str[buff], i - buff);
		if (result[u] == 0)
			return (free_result(result));
		u++;
	}
	result[count_word(str, c)] = NULL;
	return (result);
}
