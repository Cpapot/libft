/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:42 by cpapot            #+#    #+#             */
/*   Updated: 2022/11/10 16:03:48 by cpapot           ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*buff;
	size_t	i;

	i = 0;
	buff = ft_strchr(s, start);
	if (ft_strlen(buff) < len)
		result = malloc(sizeof(char) * (ft_strlen(buff) + 1));
	else
		result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	while (i != ft_strlen(buff) && i != len)
	{
		result[i] = buff[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
