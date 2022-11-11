/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:35:50 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/11 15:27:12 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
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
	if (str[0] != '\0')
		count++;
	return (count);
}

char	*ft_strndup(char const *src, int size)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
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

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		buff;
	int		size;
	int		u;

	i = 0;
	u = 0;
	buff = 0;
	size = count_word(str, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (result == 0)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		buff = i;
		while (str[i] != c && str[i] != '\0')
			i++;
		result[u++] = ft_strndup(&str[buff], i - buff);
	}
	result[size] = 0;
	return (result);
}
