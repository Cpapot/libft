/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:46:57 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/10 23:39:43 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	strlen_st(char const *s1, char *set)
{
	int	i;
	int	u;

	i = 0;
	u = ft_strlen(s1) - 1;
	while (is_set(set, s1[i]) == 1)
		i++;
	while (is_set(set, s1[u]) == 1)
	{
		u--;
		i++;
	}
	return (ft_strlen(s1) - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		y;
	int		u;

	i = 0;
	u = 0;
	y = ft_strlen(s1) - 1;
	result = malloc(sizeof(char) *(strlen_st(s1, set) + 1));
	while (is_set(set, s1[i]))
		i++;
	while (is_set(set, s1[y]))
		y--;
	while (s1[i] != '\0' && y + 1 != i)
	{
		result[u] = s1[i];
		u++;
		i++;
	}
	return (result);
}
